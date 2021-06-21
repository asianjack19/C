#include <stdio.h>

int main()
{
	int len;
	int count[110], T;
	char str[110];
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%d %s",&len, &str);
		count[i]=0;
	
		for(int j=0; j<len; j++)
		{
			if(str[j]=='0')
			{
				count[i]+=1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count[i]);
	}
	
	
	
	
	
}
