#include <stdio.h>

int main()
{
	int T, x, d=1;
	
	int a = 3;
	int b = 5;
	int c = 15;
	
	scanf("%d", &T);

	for (int i=1; i<=T; i++)
	{
		scanf("%d", &x);

			for (int y=1; y<=x;y++)
			{
			

				
				
				 if (y== a|| y== b && y!=c)
				{
						a=a*y;
						b=b;
						c=c;
					printf("Case #%d: Jojo\n", y);
	
				}
				
				
				else if (y!= a || y!= b && y==c)
				{
					a=a;
					b=b;
					c*=y;
					printf("Case #%d: Lili\n", y);
						
				}
				
		
			

				
			}
			
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
