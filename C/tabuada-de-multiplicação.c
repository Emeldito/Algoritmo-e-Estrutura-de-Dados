#include <stdio.h>
#include <stdlib.h>
// Disciplina   : [Introdução a algoritmo e programação]
// Descrição   : Tabuada de multiplicação
// Autor(a)    : Emeldito Covane
// Data actual  : 28/09/2022 
int main(void)
{
	int i, j, k;
	printf("\n");
 
	for(k = 0; k <= 1; k++)
	{
		printf("\n");
		
		for(i = 1; i < 5; i++)
			printf("TABUADA DE %3d   ",i+4*k+1);
 
		printf("\n\n");
 
		for (i = 1; i <= 9; i++)
		{
			for (j = 2+4*k; j <= 5+4*k; j++)
				printf("%3d x%3d = %3d   ",j, i, j*i);
 
			printf("\n\n");
		}
	}
 
	system("pause");
	return 0;
}