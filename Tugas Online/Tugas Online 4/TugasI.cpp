#include <stdio.h>
#include <string.h>

int main ()
{
	int T;
	int N;
	int j;
	int counter;
	char word[205];
	
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		scanf("%d", &N);
		getchar();
		scanf("%[^\n] ", word );
		counter=0;

		printf("Case #%d: ", i+1);
			for (j=0; j<N; j++)
			{
				if (word[j]==' ')
				{
					counter+=1;
				}
				if (counter % 2==0)
				{
					printf("%c", word[j]);
				}
					
			}
	printf("\n");
	}
	
		
	
	

	return 0;
}
