#include <stdio.h>
#include <stdlib.h>

struct lista
{
	int valor;
	struct lista *proximo;//ponteiro para a pr�xima entrada na lista
};

int main()
{
	struct lista *inicio = NULL;
	if(inicio==NULL)//Se a lista estiver vazia
	{
		printf("Criando lista...\n");
		inicio = (struct lista*) malloc(sizeof(struct lista));//alocamos espa�o para a estrutura
		printf("Lista criada...\n");
		if(inicio!=NULL)//Se a estrutura foi criada
		{
			inicio -> valor = 100;
			inicio -> proximo = NULL;//n�o aponta para o proximo n�
		}
		printf("O valor da variavel do primeiro no e %d\n", inicio->valor);
	}
	
	system("PAUSE");
}
