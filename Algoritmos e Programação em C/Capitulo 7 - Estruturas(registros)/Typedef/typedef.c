#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa
{
	char nome[30];
	int idade;
	float salario;
}PESSOA;

void ler(PESSOA *ptr)
{
	printf("Nome: \n");
	gets(ptr->nome);
	printf("Idade: \n");
	scanf("%d", &ptr->idade);
	printf("Salario: \n");
	scanf("%f", &ptr->salario);
}

void mostrar(struct Pessoa x)
{
	printf("Nome: %s\n", x.nome);
	printf("Idade: %d\n", x.idade);
	printf("Salario: %.2f\n", x.salario);
}

int main()
{
	struct Pessoa p={"Paulo", 35, 2000};
	mostrar(p);
	ler(&p);
	mostrar(p);
	system("PAUSE");
}
