#include <stdio.h>

int main()
{
	int T;
	int proses;
	int pros;
	long long int arr[100000];
	long long int batasarr[100000];
	long long int batas;
	long long int hasil;
	long long int x;
	long long int y;
	long long int Y;
	
	
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		Y=0;
		
		
		scanf("%d %lld", &proses, &batas);
		pros=proses;
		
		for(int j=0; j<proses; j++)
		{
			scanf("%lld", &arr[j]);
			batasarr[j]=pros;
			pros--;
			
		}
		
		
		
		for(int j=0; j<proses; j++ )
		{
			y=0;
			x=arr[j];
			
			if(Y == batasarr[j])
			{
				break;
			}
			
			for(int k=j; k<proses; k++)
			{
				
				
				if(x<=batas)
				{
					y+=1;
					
					if(y > Y)
					{
						Y=y;	
					}
					
					x+=arr[k+1];
					
				}
				else
				{
					break;
				}	
				
			}
		}	
	
		if(Y==0)
		{
			printf("Case #%d: -1\n", i+1);
		}
		else
		{
			printf("Case #%d: %lld\n", i+1,Y);
		}
		
	}
	return 0;
}
