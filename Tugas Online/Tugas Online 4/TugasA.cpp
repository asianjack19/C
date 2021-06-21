#include <stdio.h>

int main()
{
	long long int T, numOfChair, numOnLeft, numOnMid, numOnRight, flag=0;
	long long int j;
	
	scanf("%lld", &T);
	for (int i=0; i<T; i++)
	{
		scanf("%lld %lld %lld %lld", &numOfChair, &numOnLeft, &numOnMid, &numOnRight);
		for ( j=1; j<=numOfChair; j++ )
		{
			 if (numOfChair<numOnLeft*j + numOnMid*(j+1) + numOnRight*(j+2))
			{
				printf("Case #%lld: -1\n", i+1);
				break;
			}	
			
			
			
			else if (numOnLeft*j + numOnMid*(j+1) + numOnRight*(j+2)==numOfChair)
			{
				
				printf("Case #%lld: %lld\n", i+1, j);
				flag=1;
				break;
			}


		}
	
	}
	

	
	return 0;
}
