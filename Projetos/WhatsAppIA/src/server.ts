import express, { Request, Response } from 'express'
import Sender from './app/Sender'

const app = express()
const sender = new Sender()

app.use(express.json())
app.use(express.urlencoded({ extended: true }))

app.post('/send', async (request: Request, response: Response) => {
  const { to, message } = request.body

  await sender
    .sendTextMessage(to, message)
    .then(() => {
      return response.status(200).json({ message: 'Message sent' })
    })
    .catch((error) => {
      return response.status(400).json({ error })
    })
})

app.listen(3000, () => {
  console.log('Server is running on port 3000')
})
