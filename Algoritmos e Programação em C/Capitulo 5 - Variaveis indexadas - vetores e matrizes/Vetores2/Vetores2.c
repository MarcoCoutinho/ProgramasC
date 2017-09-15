#include <stdio.h>
#include <stdlib.h>

void inicializa(int s[10])
{
	int i;
	
	for (i=0 ; i<10 ; i++)
	{
		s[i]=0;//Vamos preencher as posições do vetor com '0'
	}//fim do laço
}//fim da função


void mostra(int s[10])
{
	int i;
	printf ("O vetor ficou assim:\n");//Vamos mostrar as posições do vetor
	for (i=0 ; i<10 ; i++)
	{
		printf("| %d ",s[i]);
	}
	printf ("|");
	printf ("\n\n");
}

main()
{
	int v[10];
	inicializa(v);
	mostra(v);
	
	system("PAUSE");
}
