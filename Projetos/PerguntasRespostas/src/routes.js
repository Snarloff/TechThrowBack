import { Router } from 'express'
import { answer, create, index, question, save } from './controllers/QuestionController.js'

const routes = Router()

routes.get('', index)
routes.get('/create', create)
routes.get('/question/:id', question)
routes.post('/save-question', save)
routes.post('/answer', answer)

export default routes
