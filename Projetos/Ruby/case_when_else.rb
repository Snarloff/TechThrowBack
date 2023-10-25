# encoding: UTF-8

puts "Em qual cidade vc mora: "
cidade = gets.chomp
puts "Legal, você mora em: #{cidade}"

case cidade
when 'São Paulo'
    puts 'Você mora em São Paulo!'
when 'Campinas'
    puts 'Você mora em Campinas!'
else
    puts 'Você mora em outro lugar!'
end
