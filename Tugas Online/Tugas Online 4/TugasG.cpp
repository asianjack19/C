#include <stdio.h>

int main()
{
	int T;
	long long int a, b, resultA=1, resultB=1;
	
	scanf("%d", &T);
	
	for (int i=0; i<T;i++)
	{
		scanf("%lld %lld", &a, &b);
		
		if (a==1)
		{
			resultA=a;
		}
		
		if (b==1)
		{
			resultB=b;
		}
		
		
		
		for(int j=1; j<=a; j++ )
		{
			resultA*=2;
		}
		
		for(int x=1; x<=b; x++)
		{
			resultB*=3;
		}
		
		
		
		
		printf("%lld\n", 1,000,000,007 % resultA*resultB  );
	}
	
	
	
	
	
	return 0;
}
