#include <stdio.h>
#include <stdlib.h>

main()
{
	char frase[50];
	int i;
	
	for (i=0 ; i<30 ; i++)
	{
		frase[i] = 'A' + i;/*a variavel 'i' incremente a posi��o do caractere na tabela ASCII */
	}//fim do la�o
	
	frase[i] = NULL;
	printf("A string contem %s \n", frase);
	
	system("PAUSE");
}//fim de main
