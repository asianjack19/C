#include <stdio.h>

long long int calculate_1(long long int x, long long int y)
{
	
	if (y!=0)
	{
		return	(x*calculate_1(x, y-1));
	}
	
	
	else 
	{
		return 1;
	}
		
}

long long int calculate_2(long long int z, long long int E)
{
	
	if(z!=0)
	{
		return (E*calculate_2(z-1, E));
	} 
	else 
	{
		return 1;
	}
}


int main ()
{
long long int n, a, b, c;
	scanf("%lld", &n);
	for (int i=0; i<n; i++)
	{	
		float e = 2.71828182845;
		long long int a=0, b=0, c=0;
	
		scanf("%lld %lld %lld", &a, &b, &c);
		long long int hasil_1=calculate_1(a,b);
		long long int hasil_2=calculate_2(c,e);
		
		if (hasil_1> hasil_2)
		{
			printf("Case #%d: >\n", i+1);
		}
		
		else
		
		{
			printf("Case #%d: <\n", i+1);
		}
		
	}
	
	
	
	
	
	
	
	return 0;
}
