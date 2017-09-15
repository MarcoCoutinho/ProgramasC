#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sPessoa
	{
		int idade;
		char nome[20+1];
		struct sPessoa *prox;
	}PESSOA;
	
typedef PESSOA *FILA;

void inic(FILA * fila)
{
	*fila = NULL;
}

void inserir(FILA *fila, int idade, char *nome)
{
	if ( *fila == NULL)
	{
		*fila = (FILA)malloc(sizeof(PESSOA));
		if ( *fila == NULL)
		{
			return;
		}
		(*fila) -> idade;
		strcpy((*fila) -> nome, nome);
		(**fila).prox = NULL;
	}
	else
	{
		inserir(&(**fila).prox, idade, nome);
	}
}

int main()
{
	FILA f;
	puts("Iniciando fila...\n");
	inic(&f);
	puts("Inserindo elemento...\n");
	inserir(&f , 10 , "Paulo");
	printf("Elemento inserido e %s\n\n", f -> nome);
	system("PAUSE");
}
