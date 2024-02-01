#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(int argc, char const *argv[]){
	
	setlocale(LC_ALL, "Portuguese_Brasil");

	float base, altura;

	printf("Digite a base e a altura, separado por espaço: \n");
	scanf("%f%f", &base, &altura);

	printf("Área do triângulo: %2.f\n", (base * altura) / 2);

	system("pause");
}