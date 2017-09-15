#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *str;
	str = (char *) malloc(50);
	
	if(str)
	{
		printf("50 bytes alocados!\n");
	}
	else
	{
		printf("Erro de alocacao de memoria!\n");
	}
	printf("\n");
	
	realloc(str,500);
	if (str)
	{
		printf("500 bytes foram alocados agora na memoria!\n");
	}
	else
	{
		printf("Erro de alocacao de memoria \n");
	}
}
