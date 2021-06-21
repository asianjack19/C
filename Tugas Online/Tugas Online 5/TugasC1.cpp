#include <stdio.h>
#include <math.h>

int main()
{
	int n, num1, num2, num3;
	int const e=2.71828;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{
		scanf("%d %d %d",&num1, &num2, &num3 );
		int a= num2* log(num1);
		int b= num3 * log (e);
		printf("Case #%d: ", i+1);
		if (a>b)
		{
			printf(">\n");
		}
		else
		printf("<\n");
		
	}
	
	
	
	
}
