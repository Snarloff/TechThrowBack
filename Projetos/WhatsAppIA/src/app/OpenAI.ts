import { Configuration, OpenAIApi } from 'openai'
import * as dotenv from 'dotenv'

dotenv.config()

export const configuration = new Configuration({
  apiKey: process.env.OPENAI_API_KEY as string,
})

export const openAI = new OpenAIApi(configuration)

export const getCompletion = async (prompt: string) => {
  if (!prompt) {
    throw new Error('Prompt is required')
  }

  prompt.replace('!chatgpt', '').toLowerCase()

  try {
    const completation = await openAI.createCompletion({
      model: 'text-davinci-003',
      prompt,
      temperature: 0.7,
      max_tokens: 500,
      top_p: 1,
      frequency_penalty: 0,
      presence_penalty: 0,
    })

    return completation.data.choices[0].text || 'Resposta não encontrada!'
  } catch (error) {
    console.log(error)
  }
}
