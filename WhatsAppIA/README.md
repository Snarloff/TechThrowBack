# TechThrowback - Automação WhatsApp com OpenAI

![Venom-Bot](https://img.shields.io/badge/Venom--Bot-yellow)
![Express](https://img.shields.io/badge/Express-green)
![OpenAI](https://img.shields.io/badge/OpenAI-blue)
![TypeScript](https://img.shields.io/badge/TypeScript-blueviolet)

![uploadai-api](https://github.com/Snarloff/TechThrowBack/assets/46792575/2200892b-71fa-480e-a75d-6878d360cc3d)

## Descrição

Este projeto faz parte do repositório TechThrowback e representa uma experiência de automação para envio de mensagens no WhatsApp. Utiliza o pacote npm `venom-bot` para interagir com o WhatsApp e a API da OpenAI para processamento de linguagem natural.

## Funcionalidades

- **Automação WhatsApp**: O projeto automatiza o envio de mensagens para contatos no WhatsApp.

- **Integração com OpenAI**: Utiliza a API da OpenAI para criar respostas inteligentes para mensagens recebidas.

## Comandos NPM

- **start:dev**: Inicia o projeto no modo desenvolvedor usando Nodemon e ts-node.

- **build**: Realiza a compilação do TypeScript para JavaScript.

## Configuração

1. Clone este repositório para sua máquina local.

2. Execute `npm install` para instalar as dependências.

3. Configure as variáveis de ambiente necessárias para o projeto. Certifique-se de definir a chave da API da OpenAI. `(OPENAI_API_KEY)`

4. Execute `npm run start:dev` para iniciar o projeto em modo de desenvolvimento.

## Uso

1. Acesse o WhatsApp usando o QR Code fornecido no terminal ao executar o projeto.

2. Envie uma solicitação de envio de mensagem para a rota `/send` da API, fornecendo o número de telefone (`to`) e a mensagem (`message`) no corpo da solicitação.

3. O projeto enviará a mensagem para o número fornecido e receberá uma resposta da API da OpenAI.

4. A resposta será enviada de volta ao WhatsApp.

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests para melhorar este projeto.

## Agradecimentos

Obrigado por explorar este projeto! Espero que esta integração entre `venom-bot` e OpenAI seja útil para suas próprias experiências de automação no WhatsApp.

## Licença

Este projeto está disponível sob a MIT License. Consulte o arquivo [LICENSE](LICENSE) para obter mais detalhes.
