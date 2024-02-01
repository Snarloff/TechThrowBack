#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  int array[5], maior = 0, menor = 0;

  printf("== Exercicio 3 ==\n\n");

  for(int i = 0; i < 5; i++) {

    printf("Digite o %i numero: \n", i + 1);
    scanf("%d", &array[i]);

    if (menor > array[i]) {
      menor = array[i];
    } else if(array[i] > maior) {
      maior = array[i];
      if (menor == 0) {
        menor = maior;
      }
    }
  }

  printf("\nMaior: %i\n", maior);
  printf("Menor: %i\n", menor);

  system("pause");
  return 0;
}
