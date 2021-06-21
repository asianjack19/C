#include <stdio.h>
#include <string.h>

int main()
{
	int T;

	char name[110];

	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		char vocal[]={'a','i','u','e','o','A','I','U','E','O'};
		getchar();
		scanf("%[^\n]", name);
		int len=strlen(name);
		
		for(int j=0; j<len;j++)
		{
			for(int k=0; k<11;k++)
			{
				if(name[j]!=' ')
				{
					if(name[j]==vocal[k])
					{
						name[j]=' ';
					}
				}
				
			}
		}
		
		
		
		
		for(int j=0; j<len;j++)
		{
		
				if(name[j]==' ')
				{
					if(name[j+1]>='A' && name[j+1]<='z')
					{
						continue;
					}
					else
					name[j]=name[j+1];
				}
				
			
		}
		
		printf("Case #%d: %s\n",i+1, name);
	}
	
	
	
}
