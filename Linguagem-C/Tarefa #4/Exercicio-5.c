#include <stdio.h>

int main(void) {

  int n; // quantidade
  double arr[100]; // armazena os números digitados

  printf("[~] Digite a quantidade de elementos que você quer digitar: \n"); // pergunta quantos números o usuário quer digitar
  scanf("%i", &n); // armazena na variavel n

  for (int i = 0; i < n; ++i) { // loop
    printf("Digite o numero %d°: ", i + 1);
    scanf("%lf", &arr[i]); // guarda o número que o usuário digitou no vetor/array

    if (arr[0] < arr[i]) { // se o item 0 for menor que o item atual
      arr[0] = arr[i]; // o item 0 recebe o item atual, que é o maior
    }

  }

  printf("Maior número = %.0lf\n", arr[0]); // printa o item 0, que é o número maior
  printf("Menor número = %.0lf\n", arr[n+1]); // printa o item 0, que é o número maior

  return 0;
}
