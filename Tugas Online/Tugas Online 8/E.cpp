#include<stdio.h>

int main()
{
	long long int T;
	long long int hasil ;
	long long int count ;
	long long int batas ;
	long long int jumArr ;
	long long int temp ;
	long long int x = -1;
	
	
	scanf("%lld", &jumArr);
	long long int arr[jumArr];
	
	
	
	for(int i = 0; i<jumArr; i++)
	{
		scanf("%lld", &arr[i]);
	}
	
	
	scanf("%lld", &T);
	for(long long int j = 1; j<=T; j++)
	{
		scanf("%lld", &batas);
	
	temp = 0;
	
		for(long long int i = 0; i<jumArr; i++)
		{
			hasil = 0;
			x = -1;
			count = 0;
			for(long long int j = i; j<jumArr; j++)
			{
				hasil = hasil + arr[j];
				
				if(hasil > batas)
				{
					x = count;
					break;
				}
				count++;
			}
			
			
			
			if(x == -1)
			{
				x = count;
			}
			if(x > temp)
			{
				temp = x;
			}
			if(temp == jumArr)
			{
				break;
			}
			
			
			
		}
		
		if(temp == 0)
		{
			temp = -1;
		}
		
		printf("Case #%lld: %lld\n", j,temp);
	}
}
