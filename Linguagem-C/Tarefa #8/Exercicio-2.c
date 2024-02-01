#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  
  int VetInt[6], counter=0, final=0;

  while (counter < 5){
    printf("Digite o %i numero: \n", counter + 1);
    scanf("%i", &VetInt[counter]);
    counter++;
  }

  for (int i = 0; i < 5; i++){
    final += VetInt[i];
  }
  
  printf("Soma dos valores digitados: %i\n", final);

  system("pause");
  return 0;
}
