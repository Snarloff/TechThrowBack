import Answer from '../models/Answer.js'
import Question from '../models/Question.js'

export async function index(req, res) {
  /*
		Procura tudo e quando tiver pronto, retorna no then.
		Raw como true vai fazer uma busca crua, não retornando dados a mais, somente o
		necessário
	*/
  Question.findAll({
    raw: true,
    order: [
      ['id', 'DESC'], // Crescente(ASC) ou Decrescente(DESC)
    ],
  }).then((pergunta) => {
    return res.render('index', { perguntas: pergunta })
  })
}

export async function create(req, res) {
  /* Apenas renderiza o arquivo createQuestion.ejs com os formulários */
  return res.render('createQuestion')
}
export async function save(req, res) {
  /*
					Pega o name titleQuestion no arquivo createQuestion.ejs
					Pega o name descQuestion no arquivo createQuestion.ejs
			*/
  const title = req.body.titleQuestion
  const desc = req.body.descQuestion

  Question.create({
    title,
    description: desc,
  }).then(() => {
    res.redirect('/')
  })
}
export async function question(req, res) {
  const id = req.params.id

  Question.findOne({
    // Busca apenas 1 dado.
    where: { id },
    order: [['id', 'DESC']],
  }).then((perguntas) => {
    if (perguntas !== undefined) {
      // Significa que a pergunta existe!
      Answer.findAll({
        where: { questionId: id },
      }).then((respostas) => {
        res.render('questionResults', { pergunta: perguntas, resposta: respostas })
      })
    } else {
      res.render('questionResults', { pergunta: perguntas })
    }
  })
}
export async function answer(req, res) {
  const body = req.body.bodyAnswer
  const id = req.body.questionId

  Answer.create({
    body,
    questionId: id,
  }).then(() => {
    res.redirect(`/question/${id}`)
  })
}
