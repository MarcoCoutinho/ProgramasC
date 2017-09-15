#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CD
{
	char titulo[30];
	int ano;
};//caracteristicas de cada CD

struct CD colecao[5];//cria vetor de 5 CD's

int main()
{
	colecao[0].ano = 1967;
	printf("%d\n", colecao[0].ano);
	strcpy(colecao[0].titulo, "The Beatles");
	printf("%s \n", colecao[0].titulo);
	
	colecao[1].ano = 1984;
	printf("%d\n", colecao[1].ano);
	strcpy(colecao[1].titulo, "The Smiths");
	printf("%s\n", colecao[1].titulo);
}


