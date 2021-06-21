#include <stdio.h>

int main()
{
	int T;
	int mapsize;
	int time;
	char map[110][110];
	int temp;
	

	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%d %d", &mapsize, &time);
		
		for(int j=0; j<mapsize; j++)
		{
			getchar();
			for(int k=0; k<mapsize; k++)
			{
				scanf("%c", &map[j][k]);
			}
			
		}	
		
		for(int j=0; j<time; j++)
		{
			for(int k=0; k<time; k++)
			{
				if(map[j][k]=='F')
				{
					map[j][k+1]='F';
					map[j][k-1]='F';
					map[j+1][k]='F';
					map[j-1][k]='F';
					map[j+1][k+1]='F';
					map[j+1][k-1]='F';
					map[j-1][k+1]='F';
					map[j-1][k-1]='F';
				}
			}
		}
		
		printf("Case #%d:\n", i+1);
		for(int j=0; j<mapsize; j++)
		{
			for(int k=0; k<mapsize; k++)
			{
				printf("%c", map[j][k]);
			}
			printf("\n");
		}
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
