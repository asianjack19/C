#include <stdio.h>

int main()
{
	int T;
	float proses;

	double temp;
	double arr[5005];
	
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%f", &proses);
		
		for(int j=0; j<proses; j++)
		{
			scanf("%lf", &arr[j]);
		}
		
		
		
		for(int k=0; k<proses; k++)
		{
			for(int j=0; j<proses-k-1; j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		printf("Case #%d:\n", i+1);
	
		//counting mean
		
		double sum=0;
	
		for(int j=0; j<proses; j++)
		{
			sum+=arr[j];
		}
	
		printf("Mean : %.2lf\n", sum/proses);
		
	
		//counting median
		double median;
		int p=proses;
		
		if(p % 2 == 0)
		{
			median=(arr[(p-1)/2]+arr[p/2])/2.0;
		}
		else
		{
			median=arr[p/2];
		}
		
	
		printf("Median : %.2lf\n", median);
		
		
		
		

	}
	return 0;
}
