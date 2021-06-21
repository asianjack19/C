#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	char name[110];
	char temp;
	int count;
	
	scanf("%d", &T);
	for(int i=0; i<T;i++)
	{
		count=1;
		getchar();
		scanf("%[^\n]", name);
		
		int len=strlen(name);
		
		for(int j=0; j<len-1; j++)
		{
			if(name[j]==' ')
			{
				if(j%2==1)
				{
					count=1;
					continue;
				}
				else if(j%2==0)
				{
					count=0;
					continue;
				}
			}

			if(count==1)
			{
				if(j%2==0)
				{
					if(name[j+1]==' ')
					{
						continue;
					}
					temp=name[j];
					name[j]=name[j+1];
					name[j+1]=temp;
				
				}
			}

			else if(count==0)
			{
				if(j%2==1)
				{
					if(name[j+1]==' ')
					{
						continue;
					}
					temp=name[j];
					name[j]=name[j+1];
					name[j+1]=temp;
				
				}
			}
		
			
		}
		
		printf("Case #%d:\n%s\n",i+1, name);
		
		
	}
	
	
	
}
