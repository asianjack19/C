#include <stdio.h>
#include <string.h>

int main()
{
	int r,c;
	char temp;
	char tempS[301];
	
	scanf("%d %d", &r, &c); getchar();
	
	char arr[r][c+1];
	
	for(int i = 0; i < r; i++)
	{
		scanf("%s", arr[i]);
	}

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
		for(int i = r-1; i > 0; i--)
		{
			if(strcmp(arr[i], arr[i-1]) > 0)
			{
				strcpy(tempS, arr[i]);
				strcpy(arr[i], arr[i-1]);
				strcpy(arr[i-1], tempS);
				swap = true;
			}
		}
		if(!swap)
			break;
	}
	
	for(int i = 0; i < r; i++)
	{
		printf("%s\n", arr[i]);
	}
	
	return 0;
}
