#include <stdio.h>
#include <stdlib.h>

int main()
{
	int aluno[3][5];
	int i,j;
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<5; j++)
		{
			printf("Aluno[%d][%d]: Aluno[i][j] \n", i,j, aluno[i][j]);
		}//fim do laço interno
	}//fim do laço externo
	system("PAUSE");
}//fim de main
