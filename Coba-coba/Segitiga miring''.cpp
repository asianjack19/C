#include <stdio.h>

int main()
{
	int input;
	
	scanf("%d", &input);
	
	for(int i=0; i<=input; i++)
	{
		for(int j=input-i; j>=0; j-- )
		{
			printf(" ");
		}
		
		for (int j=input-i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
