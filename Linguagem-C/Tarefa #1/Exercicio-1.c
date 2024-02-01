#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LEN 2

void main(int argc, char const *argv[]){

	setlocale(LC_ALL, "Portuguese_Brasil");

	int i; // Defini a variável aqui, porque no DevC++ ele dá erro por conta da versão!
	float total = 0;

	for (i = 0; i < LEN; i++) {
		float j;
		printf("Digite o %d° número: ", i + 1);
		scanf("%f", &j);
		total += j;
	}

	printf("Soma total: %.2f\n", total / 4);

	system("pause");
}