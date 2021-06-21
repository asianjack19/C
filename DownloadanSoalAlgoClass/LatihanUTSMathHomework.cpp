#include <stdio.h>

int main()
{
	int T;
	int angka1;
	int angka2;
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%d %d", &angka1, &angka2);
		
		for(int j=0; j<angka1; j++)
		{
			printf("%d\n",angka2+j+1 );
		}
	}
	
}
