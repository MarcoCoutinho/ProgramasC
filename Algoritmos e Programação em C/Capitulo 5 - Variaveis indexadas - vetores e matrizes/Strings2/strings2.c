#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[50];
	int i;
	
	printf("Digeite um conjunto de caracteres: \n");
	gets(string);
	
	for (i=0 ; string[i] != NULL; i++)
	{
		putchar(string[i]);
	}
	
	printf("\n");
	printf("O numero de caracteres e %d \n", i);
	
	system ("PAUSE");
}
