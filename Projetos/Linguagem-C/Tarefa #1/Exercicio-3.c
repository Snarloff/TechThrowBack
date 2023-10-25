#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LEN 4

void main(int argc, char const *argv[]){

	setlocale(LC_ALL, "Portuguese_Brasil");

	int i;
	float total = 0;

	for (i = 0; i < LEN; i++) {
		float j;
		printf("Digite a %d° nota: ", i + 1);
		scanf("%f", &j);
		total += j;
	}

	printf("Média do aluno: %.2f\n", total / 4);

	system("pause");
}

