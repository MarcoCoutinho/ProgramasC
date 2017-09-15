#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *banda[]= {"Beatles", "Smiths", "U2", "Led Zeppelin"};
	char **aponta_banda;
	
	aponta_banda = banda;
	
	while(*aponta_banda)
	{
		printf("%s\n", *aponta_banda);
		aponta_banda++;
	}
	
	system("PAUSE");
}
