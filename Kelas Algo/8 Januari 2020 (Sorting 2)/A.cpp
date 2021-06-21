#include <stdio.h>

int main()
{
	int n, t, x, temp, time;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		time = 0;
		scanf("%d %d", &n, &x);
		int arr[n];
		
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
		}
		
		while(true)
		{
			bool swap = false;
			for(int j = 0; j < n-1; j++)
			{
				if(arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					time+=x;
					swap = true;
				}
			}
			
			if(!swap)
				break;
		}
		
		printf("Case #%d: %d\n", i+1, time);
	}
	
	return 0;
}
