#include <stdio.h>
#include <stdlib.h>

int main() {

  int alunos, i = 0; // quantidade de alunos e o contador
  float media, nota = 0; // média e nota, inicialmente 0

  printf("Digite a quantidade de alunos da turma: \n");
  scanf("%d", &alunos); // armazena quantos alunos a turma tem

  for (i = 0; i < alunos; ++i) { // loop
    printf("Digite a nota do aluno %d°: ", i + 1);
    scanf("%f", &nota); // armazena

    media += nota; // += significa que ele vai somar o valor atual de media com a nota
  }

  printf("\nMedia = %.2f\n", media / alunos); // media

  system("pause");
  return 0;
}
