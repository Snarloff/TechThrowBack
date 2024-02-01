import { isValidPhoneNumber, parsePhoneNumber } from 'libphonenumber-js'
import { Message, Whatsapp, create } from 'venom-bot'
import { QRCode } from '../entities/sender.entity'
import { getCompletion } from './OpenAI'

export default class Sender {
  private client: Whatsapp
  private conected: boolean = false
  private qr: QRCode

  constructor() {
    this.initialize()
  }

  get isConnected(): boolean {
    return this.conected
  }

  get qrCode(): QRCode {
    return this.qr
  }

  private validatePhoneNumber(phoneNumber: string): string {
    if (!isValidPhoneNumber(phoneNumber, 'BR') || !phoneNumber) {
      throw new Error('Invalid phone number informed')
    }

    const number = parsePhoneNumber(phoneNumber, 'BR')
      .format('E.164')
      .trim()
      .replace('+', '')
      .includes('@c.us')
      ? phoneNumber
      : `${phoneNumber}@c.us`

    return number
  }

  private async receiveMessage(message: Message) {
    if (message.body.startsWith('!chatgpt')) {
      const answer = await getCompletion(message.body)

      if (!answer) {
        return 'Resposta não encontrada!'
      }

      this.client.sendText(message.from, answer)
    }
  }

  public async sendTextMessage(to: string, message: string) {
    await this.client
      .sendText(this.validatePhoneNumber(to), message)
      .catch((err) => {
        throw new Error(err)
      })
  }

  private initialize() {
    const qr = (base64Qrimg: string, asciiQR: string, attempts: number) => {
      this.qr = { base64: base64Qrimg, asciiQR, attempts }
    }

    const status = (statusSession: string) => {
      this.conected = ['isLogged', 'qrReadSuccess', 'chatsAvailable'].includes(
        statusSession
      )
    }

    const start = (client: Whatsapp) => {
      this.client = client
      this.client.onMessage((message) => this.receiveMessage(message))
    }

    create('snarloff-session', qr, status, {
      folderNameToken: 'sessions',
      mkdirFolderToken: './src',
      disableWelcome: true,
      logQR: true,
    })
      .then((client) => start(client))
      .catch((error) => {
        throw new Error(error)
      })
  }
}
