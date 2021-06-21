#include <stdio.h>

int main()
{
	int T;
	int JumPros;
	int arr[11100];
	int countDesc;
	int countAsc;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		countDesc=0;
		countAsc=0;
		scanf("%d", &JumPros);
		
		for(int j=0; j<JumPros; j++)
		{
			scanf("%d", &arr[j]);
			
			if(j==0)
			{
				continue;
			}
			else
			{
				if(arr[j]<arr[j-1])
				{
					countDesc+=1;
				}
				else if(arr[j]>arr[j-1])
				{
					countAsc+=1;
				}
				else if(arr[j]==arr[j-1])
				{
					continue;
				}
			}
		}
		
		printf("Case #%d: %d %d\n",i+1, countAsc, countDesc);
		
		
	}
	
	
	
	
	
}
