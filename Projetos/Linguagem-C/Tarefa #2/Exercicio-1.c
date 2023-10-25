#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	time_t mytime;
	mytime = time(NULL);
	struct tm tm = *localtime(&mytime);
	printf("Aluno: Snarloff\nData: %d/%d/%d/", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

	int number;

	printf("\nDigite um número:\n");
	scanf("%i", &number);

	printf("%s\n", number < 0 ? "\nO número é negativo" : "\nO número é positivo");
	
	system("pause");
	return 0;
}
