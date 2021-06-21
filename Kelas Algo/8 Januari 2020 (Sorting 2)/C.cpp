#include <stdio.h>

int main()
{
	int t, num;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &num);
		int arr[num];
		for(int j = 0; j < num; j++)
			scanf("%d", &arr[j]);
		
		while(true)
		{
			bool swap = false;
			
			for(int j = 0; j < num-1; j++)
			{
				if(arr[j] > arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					swap = true;
				}
			}
			
			if(!swap)
				break;
		}
		
		int ans = 0;
		for(int j = 0; j < num/2-1; j++)
		{
			int dif = arr[j+1] - arr[j];
			ans = (ans > dif) ? ans : dif;
		}
		
		for(int j = num/2; j < num-1; j++)
		{
			int dif = arr[j+1] - arr[j];
			ans = (ans > dif) ? ans : dif;
		}
		printf("Case #%d: %d\n", i+1, ans);
	}
	
	return 0;
}
