#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, c, matriz[3][3];
  
  for (i=0; i<3; i++) {
    for (c=0; c<3; c++) {
      printf("Digite um valor para [%d][%d]: ", i+1, c+1);
      scanf("%d", &matriz[i][c]);   
    }
  }
  
  printf("\n");
  
  for (i=0; i<3; i++) {
    for (c=0; c<3; c++) {
      printf("%d ", matriz[i][c]);
    }
    printf("\n");
  }

  system("pause");
  return 0;

}