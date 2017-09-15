#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sNo
{
	int N;
	struct sNo *prox;
}NO;

void inic (NO **pilha)
{
	*pilha = NULL;
}

void push (NO ** pilha, int num)
{
	NO *tmp;
	tmp = (NO*)malloc(sizeof(NO));
	if (tmp == NULL)
	{
		return;
	}
	tmp -> N = num;
	tmp -> prox = *pilha;
	*pilha = tmp;
}

int Empty(NO **pilha)
{
	return(pilha == NULL);
}

void pop(NO **pilha)
{
	NO *tmp = *pilha;
	if(Empty(pilha))
	{
		return;
	}
	*pilha = (*pilha) -> prox;
	free(tmp);
}

void print(NO *pilha)
{
	if(Empty(pilha))
	{
		return;
	}
	printf("%d\n", pilha -> N);
	Print(pilha -> prox);
}

int top(NO *pilha)
{
	if(Empty(pilha))
	{
		return -1;
	}
	return pilha -> N;
}

int main()
{
	NO *P;
	inic(&P);
	printf("%s esta vazia\n", empty(P)?"":"Nao");
	print(P);
	puts("Push: 10");
	push(&P, 10);
	puts("Push: 20");
	push(&P, 20);
	puts("PUSH: 30");
	push (&P, 30);
	printf("%s Esta vazia\n", empty(P)?"":"Nao");
	print(P);
	puts("Pop: ");
	pop(&P);
	print(P);
	puts("Pop: ");
	pop(&P);
	print(P);
	puts("Pop: ");
	pop(&P);
	print(P);
	printf("%s esta vazia\n", empty(P)?"":"Nao");
}
