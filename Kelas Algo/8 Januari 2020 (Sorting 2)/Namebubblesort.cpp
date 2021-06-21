#include <stdio.h>
#include <string.h>

int main()
{
	char name[105][105];
	int num;
	char temp[105];
	
	scanf("%d", &num);
	
	for(int i=0; i<num; i++ )
	{
		scanf("%s", &name[i]);	
	}	
	
	for(int i=0; i<num-1; i++)
	{
		for(int j=0; j<num-1-i; j++)
		{
			if(strcmp(name[j], name[j+1])>0)
			{
				strcpy(temp, name[j]);
				strcpy(name[j], name[j+1]);
				strcpy(name[j+1], temp);
			}
		}
	}
	
	
	for(int i=0; i<num; i++)
	{
		printf("%s ", name[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;	
}
