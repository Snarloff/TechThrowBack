#include <stdio.h>
#include <stdlib.h>

int main() {

  int inicial, final;

  printf("Digite o numero inicial: \n");
  scanf("%d", &inicial);

  printf("Digite o numero final: \n");
  scanf("%d", &final);

  final++;

  while (final > inicial) {

    final--;

    printf("%d\n", final);

    if (final == inicial) {
      printf("A contagem chegou ao fim!\n");
    }

  }

  system("pause");
  return 0;

}
