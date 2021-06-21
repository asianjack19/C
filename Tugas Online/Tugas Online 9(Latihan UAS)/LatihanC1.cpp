#include <stdio.h>

int x,y, count;
char arr[110][110];

void seek(int b,int a)
{
	if(b<0 || a<0)
	{
		return;
	}
	
	if (b>y-1 || a>x-1)
	{
		return;
	}
	if(a>x)
	{
		return;
	}
	
	if(arr[b][a]=='S')
	{
		return;
	}
	
	if(arr[b][a]=='K')
	{
		count+=1;
	}
	
	arr[b][a]=='S';
	seek(b-1,a);
	seek(b+1,a);
	seek(b,a+1);
	seek(b,a-1);
	
}




int main()
{
	int T;
	int A,B;
	int flag;
	
	
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		
		scanf("%d %d", &y, &x);
		count=0;
		flag=0;
		
		for (int Y=0; Y<y; Y++)
		{
				getchar();
			
			for(int X=0; X<x; X++)
			{
				scanf("%c", &arr[Y][X]);
			}
		
		}
		
		
		for (int Y=0; Y<y; Y++)
		{
			for(int X=0; X<x; X++)
			{
				if(arr[Y][X]=='H')
				{
					B=Y;
					A=X;
					flag=1;
				}
			}
		}
		
		if (flag==1)
		{
			seek(B,A);
		}
		printf("Case #%d: %d\n", i+1, count);
		
	}
	return 0;
}
