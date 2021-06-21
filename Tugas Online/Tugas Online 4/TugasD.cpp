#include <stdio.h>

int main()
{
	int x;
	
	for (int i=0; i<3; i++)
	{
		scanf("%d", &x);
		
		if (x%111==0)
		{
			printf("0.%d...\n", x/111 );
		}
		
		else if (x>=1 && x<10)
		{
			printf("0.00%d...\n", x,0/999,0);
		}

		
		else if (x>=10 && x<100)
		{
			printf("0.0%d...\n", x,0 /999,0);
		}
		
		else if (x>=100 && x<999)
		{
			printf("0.%d...\n", x,0/999,0);
		}
	}
	
	
	
	
	
	return 0;
}
