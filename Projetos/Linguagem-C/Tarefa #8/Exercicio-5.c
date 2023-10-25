#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, c; 
  float matriz[4][3], media;
  
  for (i=0; i<4; i++) {
    for (c=0; c<3; c++) {
      printf("Digite um valor para [%i][%i]: ", i+1, c+1);
      scanf("%f", &matriz[i][c]);   
    }
  }
  
  printf("\n");
  
  for (i=0; i<4; i++) {
    for (c=0; c<3; c++) {
      media += matriz[i][c];
      printf("%.2f ", matriz[i][c]);
    }
    printf("\n");
  }

  printf("\nSoma dos valores digitados: %.2f", media);
  printf("\nMedia dos valores digitados: %.2f\n", media / 4);

  system("pause");
  return 0;

}