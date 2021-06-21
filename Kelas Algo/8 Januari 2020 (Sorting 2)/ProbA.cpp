#include <stdio.h>

int main()
{
	int T;
	int temp;
	int count[10004];
	int jumGerbong[10000];
	int waktu[10005];
	int Gerbong[1004];
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		count[i]=0;
		scanf("%d %d", &jumGerbong[i], &waktu[i]);
		
		for(int j=0; j<jumGerbong[i]; j++)
		{
			scanf("%d", &Gerbong[j]);
		}
		
		for(int j=0; j<jumGerbong[i]-1; j++)
		{
			for(int k=0; k<jumGerbong[i]-1-j; k++)
			{
				if(Gerbong[k]>Gerbong[k+1])
				{
					temp=Gerbong[k];
					Gerbong[k]=Gerbong[k+1];
					Gerbong[k+1]= temp;
					count[i]++;
				}
			}
		}
		
		printf("Case #%d: %d\n",i+1, count[i]*waktu[i]);
	}

	return 0;	
}
