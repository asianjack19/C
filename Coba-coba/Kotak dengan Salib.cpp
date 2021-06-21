#include <stdio.h>

int main()
{
int input;

scanf("%d", &input);
	if(input%2==1)
		{
			input++;
		}
for( int i = 1; i <= input; i++)
{
	for( int j = 1; j <= input; j++)
	{
			if(input%2==1)
		{
			input++;
		}
		
		else if( i==1|| j==1|| i==input|| j==input|| i==j|| j==input-j|| j==input/2|| i==input/2|| i==input-j)
		{
			printf("*");
		}
	else 
		{
			printf(" ");
		}
		
		
		
	}
	printf("\n");
}




return 0;
}
