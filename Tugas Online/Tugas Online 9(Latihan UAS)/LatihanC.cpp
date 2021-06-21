#include <bits/stdc++.h>


















int main()
{
	int T;
	int x;
	int y;
	char arr[110][110];
	int count[110];
	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%d %d",&x, &y );	
		
		for(int j=0; j<x; j++)
		{
			getchar();
			for(int k=0; k<y;k++)
			{
				scanf("%c", &arr[j][k]);
			}
		}
		
		for(int j=0 ;j<110; j++)
		{
			count[j]=0;
		}
		
		for(int j=0; j<y; j++)
		{
			for(int k=0; k<x;k++)
			{
				if(arr[j][k]=='H')
				{
					if(arr[j+k+1][k]=='K')
					{	
						count[i]++;
					}
					
					if(arr[j-k-1][k]=='K')
					{
						count[i]++;
					}
					
					if(arr[j][k-1-j]='K')
					{
						count[i]++;
					}
					
					if(arr[j][k+j+1]='K')
					{
						count[i]++;
					}
					
				}
			}
		}
		
		printf("Case #%d: %d", i+1, count[i]);
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
