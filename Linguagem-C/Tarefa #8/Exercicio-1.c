#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  int VetInt[6], counter=0;

  while (counter < 6){
    printf("Digite o %i numero: \n", counter + 1);
    scanf("%i", &VetInt[counter]);
    counter++;
  }

  printf("Valores digitados:\n");

  for (int i = 0; i < 6; i++){
    printf("%d\n", VetInt[i]);
  }

  system("pause");
  return 0;
}
