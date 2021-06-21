#include <stdio.h>

int main()
{
	int proses;
	long long int arr[100005];
	int jumBatas;
	long long int x,y,Y;
	long long int batas;

	
	
	scanf("%d", &proses);
	
	for(int i=0; i<proses; i++)
	{
		scanf("%lld", &arr[i]);
	}
	
	scanf("%d", &jumBatas);
	for(int i=0; i<jumBatas; i++)
	{
		scanf("%lld",&batas );
		
			for(int j=0; j<proses; j++ )
			{
				y=0;
				x=arr[j];
			
			if(Y >= proses-j);
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
			
			printf("Case #%d: %lld\n", i+1, Y);	
		}
	}
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

