#include <stdio.h>
#include <stdlib.h>

main()
{
	int *p;
	p = (int *) malloc(sizeof(int));
	
	if (!p)
	{
		printf("Memoria insuficiente! \n");
		exit;
	}
	else
	{
		printf("Memoria alocada com sucesso!\n");
	}
	
	system("PAUSE");
}
