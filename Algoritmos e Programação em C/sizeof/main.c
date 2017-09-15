#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	short int b;
	long int c;
	
	float d;
	
	double e;
	long double f;
	
	char g;
	
	
	
	
	printf("\n%d bytes -> int\n", sizeof(a));
	printf("%d bytes -> short int\n", sizeof(b));
	printf("%d bytes -> long int\n\n", sizeof(c));
	
	printf("%d bytes -> float\n\n", sizeof(d));
	
	printf("%d bytes -> double\n", sizeof(e));
	printf("%d bytes -> long double\n\n", sizeof(f));
	
	printf("%d byte -> char\n\n", sizeof(g));
	
	system("PAUSE");
}
