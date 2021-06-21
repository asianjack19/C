#include <stdio.h>

int main()
{
	long long int T, x, d=1;
	
	long int a = 3;
	long int b = 5;
	long int c = 15;
	
	scanf("%lld", &T);

	for (int i=1; i<=T; i++)
	{
		scanf("%lld", &x);
		printf("Case #%lld:\n", i);
			for (int y=1; y<=x;y++)
			{
				  if( y%15==0 )
				  {
				  	printf("%lld Lili\n", y);
				  }		
				  
				  else if (y%5 == 0)
				  {
				  	printf("%lld Jojo\n", y);
				  }
				  
				  else if (y%3==0)
				  {
				  	printf("%lld Jojo\n", y);
				  }
				  
				  else 
				  {
				  	printf("%lld Lili\n", y);
				  }
			}	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
