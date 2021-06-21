#include <stdio.h>

int main()
{
	int n, t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("Case #%d: ", i+1);
		for(int j = 0; j < n; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				printf("%c", 'A');
				printf("%c", 'A' + k);
			}
		
		}
		printf("\n");
	
	}
	
	return 0;
}
