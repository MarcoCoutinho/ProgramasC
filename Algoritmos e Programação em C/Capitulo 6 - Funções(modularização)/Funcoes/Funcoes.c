#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b);//Prototipo da função

int main()
{
	int x,y;
	printf("Digite o primeiro numero:");
	scanf("%d", &x);
	printf("\nDigite o segundo numero:");
	scanf("%d", &y);
	printf("\nA soma e: %d \n\n", soma(x,y));
	system ("PAUSE");
}

int soma(int a, int b)//Função de fato
{
	int resultado;
	resultado = a+b;
	return resultado;
}
