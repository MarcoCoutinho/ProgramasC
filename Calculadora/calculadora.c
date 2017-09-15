#include <stdio.h>

//prot�tipos das fun��es
int soma(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
double divisao(int a, int b);
int modulo(int a, int b);

int main()
{
	int num1, num2;
	int operacao;
	//pede para o usu�rio digitar os valores
	printf("Digite um numero: ");
	scanf ("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	
	//pede para o usu�rio escolher uma opera��o
	printf("\n1 - Soma \n");
	printf("2 - Subtracao \n");
	printf("3 - Multiplicacao \n");
	printf("4 - Divisao\n");
	printf("Qual opera��o deseja realizar: ");
	scanf("%d", &operacao);
	
	//testa qual opera��o o usu�rio escolheu
	if(operacao == 1)
	{
		printf("A soma e: %d \n", soma(num1, num2));
	}else
	if(operacao == 2)
	{
		printf("A subtracao e: %d \n", subtracao(num1, num2));
	}else
	if(operacao == 3)
	{
		printf("A multiplicacao e: %d \n", multiplicacao(num1, num2));
	}else
	if(operacao == 4)
	{
		printf("A divisao e: %.2f \n", divisao(num1, num2));
		printf("Com resto: %d \n", modulo(num1, num2));
	}
}

//fun��es de processamento dos c�lculos
int soma(int a, int b)
{
	int resultado;
	resultado = a + b;
	return resultado;
}

int subtracao(int a, int b)
{
	int resultado;
	resultado = a-b;
	return resultado;
}

int multiplicacao(int a, int b)
{
	int resultado;
	resultado = a*b;
	return resultado;
}

double divisao(int a, int b)
{
	double resultado;
	resultado = a/b;
	return resultado;
}

int modulo(int a, int b)
{
	int resultado;
	resultado = a % b;
	return resultado;	
}
