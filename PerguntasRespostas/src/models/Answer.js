/*

Criação dos models utilizando o Sequelize. 
(Não usa-se códigos SQL com esse Package)

*/

import { INTEGER, TEXT } from 'sequelize'
import connect from '../database/connect'

const Answer = connect.define('respostas', {
  /* Corpo da resposta */

  body: {
    type: TEXT,
    allowNull: false,
  },
  questionId: {
    type: INTEGER,
    allowNull: false,
  },
  /* ID da questão respondida no body */
})

Answer.sync({ force: false }).then(() => {
  console.log('Answer Table Created!')
})

export default Answer
