#include <stdio.h>

int main()
{
	int T;
	int sum, min, max;
	int count;
	int count2;
	char thunder[100000];
	
	FILE *fp=fopen("testdata.in", "r");
	fscanf(fp,"%d", &T);
	
	for(int i=0; i<T; i++)
	{
		count=0;
		count2=0;
		fscanf(fp,"%d %d %d", &sum, &min, &max);
		
	
			
		fscanf(fp,"%s", &thunder);
	
		
		for(int j=0; j<=sum; j++)
		{
			if(thunder[j]=='1')
			{
				count+=1;
			}
			else 
			{
				if(count>=min && count<=max)
				{
					count2+=1;
				}
				count=0;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count2);
	}
	return 0;
}
