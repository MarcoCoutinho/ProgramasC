#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	int aluno[x][y];
	int e,i;
	
	printf("Digite o tamanho da matriz no eixo X:");
	scanf ("%d", &x);
	printf("Digite o tamanho da matriz no eixo Y:");
	scanf ("%d", &y);
	
	for (e=1 ; e<=x ; e++)
	{
		for (i=1 ; i<=y; i++)
		{
			printf("loop externo[%d]\n", e);
			printf("loop interno[%d]\n\n", i);
		}//fim do la�o interno
	}//fim do la�o externo
	
	system("PAUSE");
}//fim de main
