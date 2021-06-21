#include <stdio.h>

int fibonacci(int x)
{
	if(x==1)
	{
		return 1;
	}
	if(x%2==0)
	{
		return fibonacci(x/2);
	}
	else if(x%2==1)
	{
		return fibonacci(x-1)+fibonacci(x+1);
	}
}



int main()
{
	int T;
	int num;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%d", &num);
		printf("Case #%d: %d\n", i+1, fibonacci(num));
	}
	
	
	
	
}
