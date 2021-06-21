#include <stdio.h>

int main()
{
	
	int x,y,k, flag=0, time=0;
	
	scanf("%d %d %d", &x, &y, &k);

	for(int i=0; i<=100; i++)
	{ 

		if(x==y && x==k && y==k)
		{
			flag=1;
			break;	
		}	
		else
		{
		x+=1;
		y-=1;	
		time+=1;
		}
	}	
	
	if (flag ==1)
	{
		printf("%d\n", time);
	}
	else
	{
		printf("-1\n");
	}
	
	
	return 0;
}
