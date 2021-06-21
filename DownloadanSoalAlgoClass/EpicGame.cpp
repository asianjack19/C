#include <stdio.h>

int main()
{
	int T;
	int num;
	int count;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		
		scanf("%d", &num);
		
		
		
		count=0;
		if(num==1 && count==0)
		{
			printf("Case #%d: Lili\n", i+1);
			continue;
		}
		
		while(num!=1)
		{
			if(num==1)
			{
				count+=1;
				break;
			}
			if(num%2==1)
			{
				num=(num*3);
				++num;	
				count=count+1;
			}
			 if(num%2==0)
			{
				num=num/2;
				count=count+1;
				
			}
			
		}
		
		if(count%2==0)
		{
			printf("Case #%d: Lili\n", i+1);
		}
		else if(count%2==1)
		{
			printf("Case #%d: Jojo\n", i+1);
		}
		
	}
}
