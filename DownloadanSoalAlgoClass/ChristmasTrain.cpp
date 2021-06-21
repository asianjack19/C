#include <stdio.h>

int main()
{
	int T;
	int jumKereta;
	int Waktu;
	int Kereta[110];
	int count[110];
	int temp;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		count[i]=0;
		scanf("%d %d", &jumKereta, &Waktu);
		
		for(int j=0; j<jumKereta; j++)
		{
			scanf("%d", &Kereta[j]);
		}
		
		for(int j=0; j<jumKereta-1; j++)
		{
			for(int k=0; k<jumKereta-1-j; k++)
			{
				if(Kereta[k]>Kereta[k+1])
				{
					temp=Kereta[k];
					Kereta[k]=Kereta[k+1];
					Kereta[k+1]=temp;
					count[i]++;
				}
			}
		}
		
		
		
		
		printf("Case #%d: %d\n", i+1, count[i]*Waktu);
	}
	
	
	
	
}
