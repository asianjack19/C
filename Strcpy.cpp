#include <stdio.h>
#include <string.h>

int main()
{
	char name[110];
	char name2[110];
	int count=0;
	scanf("%[^\n]", name);
	
	int len=strlen(name);
	
	for(int i=0; i<len; i++)
	{
		name2[i]=name[i];
		count+=1;
	}
	
	printf("%s\n%d", name2, count);
	
	
	
	
	
	
	
}
