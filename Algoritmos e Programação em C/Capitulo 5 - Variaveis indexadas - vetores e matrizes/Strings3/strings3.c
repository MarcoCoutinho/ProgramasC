#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char x[10], y[10];
	
	printf("Entre a primeira string: \n");
	gets(x);
	
	printf("Entre a segunda string: \n");
	gets(y);
	
	if (strcmp(x,y)==0)
	{
		printf("Iguais!\n");
	}
	
	else
	{
		printf("Diferentes!\n");
	}
	
	system ("PAUSE");
}
