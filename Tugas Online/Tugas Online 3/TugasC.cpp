#include <stdio.h>

int main()
{
	int matrixcom[105][105], input=0, count=0;
	
	
	scanf("%d", &input);
	for (int i=0; i<input; i++)
	{
		for (int j=0; j<input; j++)
		{
			scanf("%d", &matrixcom[i][j]);
		}
	}
	
	for(int i=0; i<input; i++)
	{
		for (int j=0; j<input; j++)
		{
			for (int x= i+1; x<input; x++)
			{
				for (int y=j+1; y<input; y++)
				{
					if(matrixcom[i][j]==matrixcom[x][j] || matrixcom[i][j]==matrixcom[i][y])
					{
						count+=1;
					}
					else 
					{
						count+=0;
					}
			
					
				}
			}
		}
	}
	
	if (count>=1)
	{
		printf("Nay\n");
	}
	
	else
	{
		printf("Yay\n");
	}
	
	
	
	return 0;
}
