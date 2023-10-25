#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, i;
  float menor=0, maior=0, media=0, numero;

  printf("Digite quantos numeros voce quer digitar: \n");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    printf("Digite o numero %d: ", i + 1);
    scanf("%f", &numero);

    if (numero > maior) {
      maior = numero;
    }

    if (menor == 0 || numero < menor){
      menor = numero;
    }

    media += numero;
  }

  media = (media/n);
  printf("======================\nMaior: %.2f\nMenor: %.2f\nMedia: %.2f\n======================", maior, menor, media);

  system("pause");
  return 0;
}
