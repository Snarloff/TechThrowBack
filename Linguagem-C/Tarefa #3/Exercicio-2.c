#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mencao;

	printf("Digite sua menção: \n");
	scanf("%i", &mencao);

	switch (mencao){

		case 5: 
			printf("Sua menção é ÓTIMA!\n");
			break;

		case 4:
			printf("Sua menção é MUITO BOM!\n");
			break;

		case 3:
			printf("Sua menção é BOM!\n");
			break;

		case 2:
			printf("Sua menção é REGULAR!\n");
			break;

		case 1:
			printf("Sua menção é INSUFICIENTE!\n");
			break;

		default: 
			printf("Sua menção é INVÁLIDA!");
			break;

	}

	system("pause");
	return 0;
}