#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	int number;

	printf("Digita um numero: \n");
	scanf("%i", &number);

	printf("%s\n", number < 100 ? "\nO número é menor do que 100!" : "\nO número é maior ou igual a 100!");

	system("PAUSE");
	return 0;

}