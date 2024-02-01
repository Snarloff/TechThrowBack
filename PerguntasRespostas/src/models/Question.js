/*

Criação dos models utilizando o Sequelize. 
(Não usa-se códigos SQL com esse Package)

*/

import { STRING, TEXT } from 'sequelize'
import connect from '../database/connect'

const Question = connect.define('perguntas', {
  title: {
    type: STRING, // Textos curtos
    allowNull: false, // Não coloca um valor nulo
  },
  description: {
    type: TEXT, // Textos longos
    allowNull: false, // Não coloca um valor nulo
  },
})

/*

Caso não tenha a tebela, ele irá criar, sincronizando-o. 
Caso tenha, com o `force` não irá forçar a criação novamente.

*/

Question.sync({ force: false }).then(() => {
  console.log('Question Table Created!')
})

export default Question
