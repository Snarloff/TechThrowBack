#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  float numeros[4], soma = 0;
  int contador = 0;

  while (contador < 4){
    printf("Digite o %i numero: \n", contador + 1);
    scanf("%f", &numeros[contador]);
    contador++;
  }

  for (int i = 0; i < 4; i++){
    soma += numeros[i];
  }

  printf("\nMedia: %.2f\n", soma / 4);

  system("pause");
  return 0;
}
