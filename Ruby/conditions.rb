# Exemplo 1: Usando if simples
idade = 18

if idade >= 18
  puts "Pode votar e dirigir."
else
  puts "Não pode votar ou dirigir."
end

# Exemplo 2: Usando if, elsif e else
nota = 85

if nota >= 90
  puts "Aprovado com A+."
elsif nota >= 80
  puts "Aprovado com B."
elsif nota >= 70
  puts "Aprovado com C."
else
  puts "Reprovado."
end

# Exemplo 3: Condições inline
tem_cartao = true
mensagem = tem_cartao ? "Você pode pagar com cartão." : "Apenas pagamento em dinheiro."

puts mensagem
