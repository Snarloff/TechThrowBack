#include <stdio.h>
#include <stdlib.h>

int main(void){

  float vetor[4], quant, media;
  int error = 0;

  for (int i = 0; i < 4; i++){

    printf("Digite a nota %d:\n", i + 1);
    scanf("%f", &vetor[i]);

    if (vetor[i] > 10 || vetor[i] < 0) {
      printf("A nota e maior do que 10 ou menor do que 0! Nao aceito.");
      error = 1;
      break;
    }
    
    quant += vetor[i];

  }

  if (error != 1) {

    media = quant / 4;

    printf(media >= 6 ? "\n===================\nStatus: APROVADO\n" : "\n===================\nStatus: REPROVADO\n");
    printf("Media: %.2f\n===================", media);

    return 0;

  }
  

}
