#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor = 8;
	int *pont = &valor;
	
	printf("O valor de x e: %d\n", valor);
	printf("O endereco de x e: %p\n", &valor);//pode usar %x para formato hexadecimal
	printf("Valor de pont e %p\n", pont);
	printf("O endereco de pont e: %p\n", &pont);
	printf("O valor de x acessado por pont e: %d\n", *pont);
	
	sytem("pause");
}
