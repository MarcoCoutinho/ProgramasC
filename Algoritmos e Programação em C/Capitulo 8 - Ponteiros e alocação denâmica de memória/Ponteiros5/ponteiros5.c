#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[30] = "FATEC Americana";
	char *ptr_str;
	
	ptr_str = nome;
	
	printf("A string e referenciada por %c\n", *ptr_str);
	printf("A string exibida via ponteiro:\n");
	
	while(*ptr_str)
	{
		putchar(*ptr_str);
		ptr_str++;
	}
	
	printf("\n");
}
