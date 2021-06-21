#include <stdio.h>

int main()
{
	int mapsize;
	char map[110][110];
	
	scanf("%d", &mapsize);
	
	for(int j=0; j<mapsize; j++)
	{
		for(int k=0; k<mapsize; k++)
		{
			scanf("%c", &map[j][k]);
		}
	}
	
	
	for(int j=0; j<mapsize; j++)
	{
		for(int k=0; k<mapsize; k++)
		{
			printf("%c", &map[j][k]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
