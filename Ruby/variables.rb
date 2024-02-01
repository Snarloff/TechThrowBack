# Símbolos
minha_chave = :simbolo
puts minha_chave

# Arrays
meu_array = [1, "dois", 3.0]
puts meu_array[1]  # Acessando o segundo elemento do array

# Hashes
meu_hash = {"nome" => "Snarloff", "idade" => 99}
puts meu_hash["nome"]  # Acessando o valor associado à chave "nome"

# Nil (valor nulo)
valor = nil
puts "Valor é nulo" if valor.nil?

# Tipagem dinâmica
x = 10
puts x.class  # Mostra que x é uma instância da classe Fixnum (inteiro)

y = "texto"
puts y.class  # Mostra que y é uma instância da classe String

# Tipagem fraca
resultado = 5 + "5".to_i
puts "Resultado da soma: #{resultado}"

# Tipos básicos
inteiro = 42
ponto_flutuante = 3.14
booleano = true

# Conversão de tipos
numero_texto = "123"
numero = numero_texto.to_i
puts "Número: #{numero}"

# Outros tipos de conversões
texto_numero = numero.to_s
puts "Número como texto: #{texto_numero}"
