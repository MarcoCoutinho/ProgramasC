#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
	char nome[30];
	int idade;
};

alteracao(struct Pessoa *acesso)//adiciona 20 anos a idade
{
	acesso -> idade += 20;
}

int main()
{
	struct Pessoa acesso;
	
	printf("Entre nome: \n");
	gets(acesso.nome);
	printf("Entre idade: \n");
	scanf("%d", &acesso.idade);
	
	printf("Dados iniciais: \n");
	printf("Nome: %s\n", acesso.nome);
	printf("Idade: %d\n", acesso.idade);
	
	alteracao(&acesso);
	
	printf("Dados apos mudancas:\n");
	printf("Nome: %s\n", acesso.nome);
	printf("Idade: %d\n", acesso.idade);
}
