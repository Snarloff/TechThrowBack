#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	int idade;

	printf("Digita a sua idade: \n");
	scanf("%i", &idade);

	printf("%s\n", idade < 18 ? "\nVocê NÃO é maior de idade!" : "\nVocê É maior de idade!");

	system("PAUSE");
	return 0;
}