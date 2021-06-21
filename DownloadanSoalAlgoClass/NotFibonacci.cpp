#include <stdio.h>

int fibonacci(int a, int b, int c )
{
	if(c==a)
	{
		return a;
	}
	
	if(c==b)
	{
		return b;
	}
	
	else
	{
		return fibonacci(a,b,c-1)+fibonacci(a,b,c-2);
	}
}



int main()
{
	int firstnum;
	int secondnum;
	
	int n;
	
	scanf("%d %d\n%d", &firstnum, &secondnum, &n);
	
	printf("%d\n",fibonacci(firstnum, secondnum, n) );
}
