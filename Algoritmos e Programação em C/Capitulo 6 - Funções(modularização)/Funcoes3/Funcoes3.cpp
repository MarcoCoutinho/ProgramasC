#include<stdio.h>
#include<stdlib.h>

int max(int n1, int n2)
{
	if(n1>n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}

main()
{
	int x,y;
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numeor: ");
	scanf("%d", &y);
	printf("O maior e: %d\n", max(x,y));
	system("PAUSE");
}
