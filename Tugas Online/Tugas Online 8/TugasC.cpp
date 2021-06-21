#include <stdio.h>

int main()
{
	int T;
	int x;
	int n;
	int j=0;
	int k=0;
	long long int temp;
	long long int arr[100005];
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		for(int j=0; j<25; j++)
		{
			scanf("%lld", &arr[j]);
		}
		
		
		
			
			for(int k=0; k<25; k++)
			{
				for(int j=0; j<25-k-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}	
			
			
	
		for(int j=0; j<25; j++)
		{
			printf("%lld ", arr[j]);
		}
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
