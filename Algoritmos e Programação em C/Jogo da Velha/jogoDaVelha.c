#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicia(char s[3][3])
{
	int i = 0;
	int j = 0;
	
	for( i = 0 ; j < 3 ; i++)
	{
		printf("\n");
		for( j = 0 ; j < 3 ; j++)
		{
			s[i][j] = ' ';
		}
	}
	
}

void mostra (char s[3][3])
{
	int i = 0;
	int j = 0;
	
	for(i = 0 ; i < 3 ; i++)
	{
		printf("\n");
		for(j = 0; j < 3 ; j++)
		{
			printf("|%c", s[i][j]);
		}
		printf("|");
	}
	
	if ((s[0][0] == 'x' && s[0][1] == 'x' && s[0][2] == 'x')||
	    (s[1][0] == 'x' && s[1][1] == 'x' && s[1][2] == 'x')||
	    (s[2][0] == 'x' && s[2][1] == 'x' && s[2][2] == 'x')||
	    (s[0][0] == 'x' && s[1][0] == 'x' && s[2][0] == 'x')||
	    (s[0][1] == 'x' && s[1][1] == 'x' && s[2][1] == 'x')||
	    (s[0][2] == 'x' && s[1][2] == 'x' && s[2][2] == 'x')||
	    (s[0][0] == 'x' && s[1][1] == 'x' && s[2][2] == 'x')||
	    (s[0][2] == 'x' && s[1][1] == 'x' && s[2][0] == 'x'))
	   {
	   		printf("\n\a\t\tjogador x venceu!\n");
	   		system ("PAUSE");
	   		exit(1);
	   }
	   
	   
	if ((s[0][0] == 'o' && s[0][1] == 'o' && s[0][2] == 'o')||
	    (s[1][0] == 'o' && s[1][1] == 'o' && s[1][2] == 'o')||
	    (s[2][0] == 'o' && s[2][1] == 'o' && s[2][2] == 'o')||
	    (s[0][0] == 'o' && s[1][0] == 'o' && s[2][0] == 'o')||
	    (s[0][1] == 'o' && s[1][1] == 'o' && s[2][1] == 'o')||
	    (s[0][2] == 'o' && s[1][2] == 'o' && s[2][2] == 'o')||
	    (s[0][0] == 'o' && s[1][1] == 'o' && s[2][2] == 'o')||
	    (s[0][2] == 'o' && s[1][1] == 'o' && s[2][0] == 'o'))
	   {
	   		printf("\n\a\t\tjogador o venceu!\n");
	   		system ("PAUSE");
	   		exit(1);
	   }
}

main()
{
	char velha[3][3];
	int x, y, z, w;
	inicia(velha);
	
	while(1)
	{
		printf("\n\nFaca sua jogada (x): \n)");
		printf("Vertical = ");
		scanf("%d", &x);
		printf("Horizontal = ");
		scanf("%d", &y);
		
		velha [x][y] = 'x';
		system("cls");
		mostra(velha);
		printf("\n");
		
		printf("\n\nFaca sua jogada (o): \n)");
		printf("Vertical = ");
		scanf("%d", &z);
		printf("Horizontal = ");
		scanf("%d", &w);
		
		velha [z][w] = 'o';
		system("cls");
		mostra(velha);
		printf("\n");
	};
}
