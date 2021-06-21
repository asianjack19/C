#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
	
	for (int i=1; i<=input; i++)
	{
		for (int j=input-i; j>=1; j--)
		{
			printf(" ");
		}
		
		for(int j=1; j<=i*2-1; j++)
		{
			printf("*");
		}
		
		
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
