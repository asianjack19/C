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
		printf("Case #%d: \n", i);

			for (int y=1; y<=x;y++)
			{
				  if (y==c)
				{
					printf("%d Lili\n", y);
					c=c+15;	
				}
				
				  else if (y == a  )
				 {
					printf("%d Jojo\n", y);
					a=a+3;
				 }
				
				else if (y == b )
				{
					printf("%d Jojo\n", y);
					b=b+5;
				}
				

			
				else if (y!=a || y!=b || y==c)
				{
					printf("%d Lili\n", y);
				}		
			}	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
