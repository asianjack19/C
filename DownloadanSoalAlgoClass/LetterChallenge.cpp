#include <stdio.h>
#include <string.h>

int main()
{
	char vocal[]={'a', 'i','u','e','o'};
	char consonant[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	char name[110];
	int countV=0;
	int countN=0;
	
	
	scanf("%[^\n]", name);
	
	int len=strlen(name);
	
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<6;j++)
		{
			if(name[i]!=' ')
			{
				if(name[i]==vocal[j])
				{
					countV+=1;
					vocal[j]='#';				
				}
			}
		}
		
		
		for(int j=0;j<26;j++)
		{
			if(name[i]!=' ')
			{
				if(name[i]==consonant[j])
				{
					countN+=1;
					consonant[j]='#';				
				}
			}
		}
	}
	
	printf("Vocal: %d\n", countV);
	printf("Consonant: %d\n", countN);
	
}
