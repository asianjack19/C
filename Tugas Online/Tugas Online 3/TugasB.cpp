#include <stdio.h>

int main()
{
int input;
char sym[100][100];


scanf("%d", &input);	


for(int i=0; i<input; i++)
{getchar();

	for (int j=0; j<input; j++)
	{
		
		scanf("%c", &sym[i][j]);
	}
}


for (int i=input-1; i>=0; i--)
{
	
	for (int j=input-1; j>=0; j--)
	{
		printf("%c", sym[i][j]);
	}
	printf("\n");
}






	return 0;
}
