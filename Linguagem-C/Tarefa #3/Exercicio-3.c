#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sigla;

	printf("SP = Sao Paulo\nMG = Minas Gerais\nRJ = Rio do Janeiro\nE  = Espirito Santo\n\n");
	printf("Digite a sigla:\n");
	scanf("%c", &sigla);

	switch (sigla){

		case 'S':
		case 'P': 
			printf("São Paulo!\n");
			break;

		case 'M':
		case 'G':
			printf("Minas Gerais!\n");
			break;

		case 'R':
		case 'J':
			printf("Rio de Janeiro!\n");
			break;

		case 'E':
			printf("Espírito Santo!\n");
			break;

		default: 
			printf("Sigla inválida!");
			break;

	}

	system("pause");
	return 0;
}