#include <stdio.h>

int main()
{
	int N;
	long long int arr[100000];
	long long int batas[100000];
	long long int temp;
	

	
	scanf("%d", &N);
	for(int i=0; i<N; i++)
	{
		scanf("%lld", &arr[i]);
	}

	// Scan batas-batas penjumlahan
	int T;
	scanf("%d",&T );
	for(int i=0; i<T; i++)
	{
		scanf("%lld", &batas[i]);
	}

	for(int i=0; i<T; i++)
	{
		
		long long int count=0;
		int flag;
		long long int x=0;
		
		for(int j=0; j<N; j++)
		{
			x+=arr[j];
			if(x<=batas[i]  )
			{	
				count+=1;
			}	
			else if(x>batas[i])
			{
				count+=0;
				break;
			}
		}
		
		if (count==0)
		{
			printf("Case #%d: -1\n", i+1);
		}
		else
		{
			printf("Case #%d: %lld\n", i+1, count);
		}
		
		
		
	}
	

	return 0;
}
