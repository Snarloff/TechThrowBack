import bodyParser from 'body-parser'
import express from 'express'
import path from 'path'
import connect from './src/database/connect.js'

/* 

Requisição ao models & 

Quando tiver novos models: `npm require-dir`
const requireDir = require('require-dir')

*/

import './src/models/Answer.js'
import './src/models/Question.js'

const app = express()

/*

then é chamado somente quando a autenticação dá certo

*/

connect
  .authenticate()
  .then(() => {
    console.log('Database Connected!')
  })
  .catch((err) => {
    console.log('Database Error: ' + err)
  })

/*

Seta o viewEngine do express para o EJS
(Renderizador de HTML)

*/

app.set('views', path.join(__dirname, 'src/views/'))
app.set('view engine', 'ejs')
app.use(express.static(path.join(__dirname, 'src/views/public/')))
app.use(bodyParser.urlencoded({ extended: false }))
app.use(bodyParser.json()) // Ler dados enviados via JSON

app.use('/', import('./src/routes'))

app.listen(8080, function (error) {
  if (error) {
    console.log(error)
  } else {
    console.log('Server Connected.')
  }
})
