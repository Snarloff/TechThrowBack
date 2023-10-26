export interface QRCode {
  base64: string
  asciiQR: string
  attempts: number
}

export type ConnectionStatus = 'isLogged' | 'qrReadSuccess' | 'chatsAvailable'
