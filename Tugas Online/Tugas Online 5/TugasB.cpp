#include <stdio.h>

void change_to_Alphabet(int X, int A)
{

	if (A<=X)
	{
		printf("%c", A);
		change_to_Alphabet(X, A+1);
		
	}
}






int main()
{
	int n, N;
	
	scanf("%d", &n);
	{
		for(int i=0; i<n; i++)
		{	
			N=0;
			scanf("%d", &N);
			N+96;
			int a=122;
			change_to_Alphabet(N, a);
		}
	}
	return 0;
}
