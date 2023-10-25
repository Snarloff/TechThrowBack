#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char cnh;
	
	printf("Digite o tipo da CNH:\n");
	scanf("%c", &cnh);
	
	switch (cnh){
		case 'A':
			printf("Categoria moto!");
			break;
		case 'B':
			printf("Categoria veiculos leves!");
			break;
		case 'C':
			printf("Categoria onibus!");
			break;
		case 'D':
			printf("Categoria caminhao!");
			break;
		case 'E':
			printf("Categoria carreta!");
			break;
		default:
			printf("CNH Inválida!");
			break;
	}

	system("pause");
	return 0;
}