#include <stdio.h>
#include <stdlib.h>

int main(){

	int i; // contador
  int len = 4; // define quantas notas o programa vai pedir
	float total = 0; // nota total

	for (i = 0; i < len; i++) { // loop
		float j; // o "j" vai receber a nota que o usuário digitar
		printf("\nDigite a %d° nota: ", i + 1);
		scanf("%f", &j); // armazena o valor digitado
		total += j; // e vai somar com o total, que por padrão é 0
	}

	printf("\nMedia do aluno: %.2f\n", total / len); // divide o total pela quantidade de notas
	system("pause");

  return 0;
}
