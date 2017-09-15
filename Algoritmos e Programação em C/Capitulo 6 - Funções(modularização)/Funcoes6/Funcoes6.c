#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])//aqui a definição completa de main()
{
	printf("Numero de argumentos de main(): %d \n", argc);
	printf("Valores dos argumentos de main(): %S e %s\n", argv[0], argv[1]);
	return 0;
}
