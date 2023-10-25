#include <stdio.h>
#include <stdlib.h>

int main() {

  // Crie um algoritmo usando o While/Enquanto em C/VisualG que leia vários números e
  // mostre a soma dos numeros digitados. O laço deve ser finalizado quando um numero
  // maior que 1000 for digitado.

  int numero = 0;
  int soma = 0;

  while (numero < 1000) {

    printf("Digite um numero: \n");
    scanf("%d", &numero);
 
    soma += numero;

    if (numero >= 1000) {
      printf("O numero é maior ou igual a 1000! O programa foi parado.\n");
      printf("Soma total: %d\n", soma);
    }

  }

  system("pause");
  return 0;

}
