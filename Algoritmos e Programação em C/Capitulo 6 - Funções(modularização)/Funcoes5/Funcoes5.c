#include <stdio.h>
#include <stdlib.h>

int valor (int * a, int * b);

int main ()
{
	int n1 = 1;
	int n2 = 1;
	int total;
	printf ("Valores iniciais de n1 e n2: %d e %d\n", n1 , n2);
	printf("Chamando a funcao...\n");
	valor(&n1, &n2);//passado o endereco da variavel
	printf("Valores depois de chamada a funcao: %d e %d \n", n1, n2);
}

int valor (int *a, int *b)
{
	*a = *a+1;
	*b = *b+2;
	printf("Valores das variaveis dentro da funcao: \n");
	printf("Valor 1 = %d\n", *a);
	printf("Valor 2 = %d\n", *b);
}
