#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char st[40] = "HELLO";
	int i;
	
	for (i=0; st[i] ; i++)
	{
		st[i] = tolower(st[i]);
	}//fim de for
	
	printf("HELLO passara a minusculas...\n", st);//mostra a string em minusculas
	printf("%s\n", st);//mostra a string em minusculas
	system("PAUSE");
	
}//fim de main
