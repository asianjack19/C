#include <stdio.h>

int main()
{
	int n, N;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	{	N=0;
		scanf("%d", &N);
		N+=97;
		printf("Case #%d: ", i+1);
		for (int j=97; j<N; j++)
		{
			int x=N-1;
			if (j==x)
			{
				printf("%c\n",j );
			}
			else
			printf("%c", j);
		}
	}
	
	
	
	
	
	
	return 0;
}
