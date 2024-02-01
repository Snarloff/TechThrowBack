#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, pacientes, idade, maior; // define as variáveis

  printf("Digite a quantidade de pacientes do hospital: \n"); // pergunta a quantidade de pacientes
  scanf("%i", &pacientes);

  for (i = 0; i < pacientes; i++) { // loop
    printf("\nDigite a idade do paciente %d°: ", i + 1); // pergunta a idade de cada paciente
    scanf("%i", &idade); // armazena a idade recem escrita

    if (i == 1) { // quando perguntar o 1 paciente, consequentemente ele vai ser o maior
      maior = idade;
    }

    if (idade > maior) { // caso a idade que ele acabou de digitar for maior do que o item 1, ele troca
      maior = idade;
    }

  }

  printf("Maior idade = %i\n", maior); // retorna o valor

  system("pause");
  return 0;

}
