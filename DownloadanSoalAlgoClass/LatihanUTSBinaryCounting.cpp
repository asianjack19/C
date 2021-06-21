#include <stdio.h>

int main()
{
	int T;
	long long int X;
	long long int arrNum[220];
	int countZ;
	int countOne;
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		countZ=0;
		countOne=0;
		scanf("%lld", &X);
		
		
		if(X==0)
		{
			countZ+=1;
			countOne+=0;
		}
		while(X!=0)
		{
			int j=0;
			arrNum[j]=X%2;
			if(arrNum[j]==0)
			{
				countZ+=1;
			}
			else
			{
				countOne+=1;
			}
			X=X/2;
			j++;
		}
		
		printf("Case #%d:\n", i+1);
		printf("0 : %d\n", countZ);
		printf("1 : %d\n", countOne);
	}
	
	
	
	
	
	
}
