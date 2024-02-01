import Sequelize from 'sequelize'
const connect = new Sequelize('sqlite::memory:')

export default connect
