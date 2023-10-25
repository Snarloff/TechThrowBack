# Array

list_name = ["Python", "C#", "Java", "Ruby"]

print list_name[0] + "\n" # Index
print list_name[1]

# Array Push Command

list_null = []

list_null.push("Cobol") # Append
list_null << "Python" 

puts list_null

# Hash

dict_name = {
	"Python" => "Cool language...",
	"C#" => "Maybe...",
	"Java" => "Not maybe..."
}

puts "A melhor linguagem é #{dict_name.keys[0]}"
puts "#{dict_name.keys[0]} is a #{dict_name["Python"]}"
