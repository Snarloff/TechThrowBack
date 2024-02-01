#include <stdio.h>
#include <stdlib.h>

int main() {

  int inicial, final;

  printf("Digite o numero inicial: \n");
  scanf("%d", &inicial);

  printf("Digite o numero final: \n");
  scanf("%d", &final);

  inicial--;

  while (inicial < final) {

    inicial++;

    printf("%d\n", inicial);

    if (inicial == final) {
      printf("A contagem chegou ao fim!\n");
    }

  }

  system("pause");
  return 0;

}
