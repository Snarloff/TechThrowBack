#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  int VetInt[6], counter=0;

  printf("== Exercicio 1 ==\n\n");

  while (counter < 6){
    printf("Digite o %i numero: \n", counter + 1);
    scanf("%i", &VetInt[counter]);
    counter++;
  }

  printf("Valores do vetor VetInt:\n");

  for (int i = 0; i < 6; i++){
    printf("%d\n", VetInt[i]);
  }

  system("pause");
  return 0;
}
