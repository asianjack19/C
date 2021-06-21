#include <stdio.h>

int main()
{
	int T;
	int jum;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{	
		
		scanf("%d", &jum);
		int x=jum-1;
		if(jum%2==1)
		{
			for(int j=1; j<=jum;j++)
			{
				for(int k=1; k<=x; k++)
				{
					printf(" ");
				}
				x--;
				for(int k=1; k<=j; k++)
				{
					if(k%2==1)
					{
						printf("*");
					}
					else
					printf("#");
				}
				printf("\n");
			}
		}
		
		else if(jum%2==0)
		{
			for(int j=1; j<=jum;j++)
			{
				for(int k=1; k<=x; k++)
				{
					printf(" ");
				}
				x--;
				for(int k=1; k<=j; k++)
				{
					if(k%2==1)
					{
						printf("#");
					}
					else
					printf("*");
				}
				printf("\n");
			}
		}
	}
	
	
	
	
	
}
