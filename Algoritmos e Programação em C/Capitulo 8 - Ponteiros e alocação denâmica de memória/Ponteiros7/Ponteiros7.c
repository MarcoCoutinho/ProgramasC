#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *dia[] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "sexta", "Sabado", 0};//repare o indicador de final de vetor
	
	char **ptr_dia;// *dia � um ponteiro para uma string e **ptr_dia � um ponteiro para um ponteiro para uma string
	
	ptr_dia = dia;
	
	while(*ptr_dia)
	{
		printf("%s\n", *ptr_dia);
		ptr_dia++;
	}
	
	system("PAUSE");
}
