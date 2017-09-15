#include <stdio.h>
#include <stdlib.h>

int dif(int a, int b);

int main()
{
	int x, y, total;
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &y);
	total = dif(x,y);
	printf("\nResultado = %d \n\n", total);
	system("PAUSE");
}

int dif(int a, int b)
{
	int resultado;
	resultado = a-b;
	return (resultado);
}
