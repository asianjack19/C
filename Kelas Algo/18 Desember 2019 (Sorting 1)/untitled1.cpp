#include <stdio.h>

int main()
{
	
	int T;
	char number[100002];
	int proses;
	int count;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		count=0;
		scanf("%d %s", &proses, &number);
		
		for(int j=0; j<proses; j++)
		{
			if(number[j]=='0')
			{
				count+=1;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count);
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
