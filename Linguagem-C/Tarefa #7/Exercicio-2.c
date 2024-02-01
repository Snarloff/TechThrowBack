#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  int numeros[6], contador=0;

  printf("== Exercicio 2 ==\n\n");

  while (contador < 6){
    printf("Digite o %i numero: \n", contador + 1);
    scanf("%i", &numeros[contador]);
    contador++;
  }

  printf("Valores digitados:\n");

  for (int i = 0; i < 6; i++){
    printf("%d\n", numeros[i]);
  }

  system("pause");
  return 0;
}
