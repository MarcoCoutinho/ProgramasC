#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, *p, **q;
	x = 10;
	p = &x;
	q = &p;
	printf("Valor atribuido a x = %d\n", x);//valor de x
	printf("Valor de x, acessado pelo ponteiro duplo = %d\n", **q);//valor de x
	
	system("PAUSE");
}
