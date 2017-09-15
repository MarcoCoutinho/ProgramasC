#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
	int RA;
	char nome[50];
	float nota;
};

int main()
{
	struct Aluno Paulo;
	printf("RA: \n");
	scanf("%d", &Paulo.RA);
	printf("Nota \n");
	scanf("%f", &Paulo.nota);
	printf("Nome: \n");
	scanf("%s", Paulo.nome);
	
	printf("\nExibicao dos dados do aluno:\n");
	printf("RA: %d \n", Paulo.RA);
	printf("Nota: %.2f \n", Paulo.nota);
	printf("Nome: %s \n", Paulo.nome);
	
	system("PAUSE");
}
