#include <stdio.h>

int main()
{

int input;
scanf("%d", &input);

//segitiga kuadran 2
for(int i=1; i<=input;i++)
{
	for (int j=1; j<=input-i; j++)
	{
		printf(" ");
	}
	
	for (int j=1 ;j<=i; j++)
	{
		printf("*");
	}
	//segitiga kuadran 1
		for (int j=1; j<=i; j++)
	{
		printf("*");
	}
	
	printf("\n");
}







for(int i=1; i<=input;i++)
{
	for (int j=1; j<i; j++)
	{
		printf(" ");
	}
	for (int j=input-i; j>=0;j--)
	{
		printf("*");
	}
	for (int j=input-i; j>=0;j--)
	{
		printf("*");
	}
printf("\n");
}




return 0;
}
