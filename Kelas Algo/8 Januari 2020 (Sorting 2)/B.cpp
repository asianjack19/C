#include <stdio.h>

int main()
{
	int r,c;
	char temp;
	
	scanf("%d %d", &r, &c); getchar();
	
	char arr[r][c];
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			scanf("%c", &arr[i][j]);
		}
		getchar();
	}
	
//	for(int i = 0; i < r; i++)
//	{
//		for(int j = 0; j < c; j++)
//		{
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
	
	while(true)
	{
		bool swap = false;
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c-1; j++)
			{
				if(arr[i][j] > arr[i][j+1])
				{
					temp = arr[i][j];
					arr[i][j] = arr[i][j+1];
					arr[i][j+1] = temp;
					swap = true;
				}
			}
		}
		
		if(!swap)
			break;
	}
	
	while(true)
	{
		bool swap = false;
		for(int i = 0; i < c; i++)
		{
			for(int j = r-1; j > 0; j--)
			{
				if(arr[j][i] > arr[j-1][i])
				{
					temp = arr[j][i];
					arr[j][i] = arr[j-1][i];
					arr[j-1][i] = temp;
					swap = true;
				}
			}
		}
		
		if(!swap)
			break;
	}
	
	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
