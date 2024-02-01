# While

num = 10

while num <= 10
	puts "Ainda é menor que #{num}!"
	num +=1
end

puts "É maior que #{num}!"

# For

for num in 0...10
	puts num
end

# Iterador Each

[1, 2, 3, 4, 5].each do |num|
	puts num
end

# Using Variable

list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] # Array

list.each do |num|
	puts num
end