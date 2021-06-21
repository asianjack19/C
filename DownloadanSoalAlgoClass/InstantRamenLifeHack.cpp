#include <stdio.h>

int main()
{
	int T;
	int RamenNeeded;
	int RamenOwned;
	int RamenAvailable;
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		scanf("%d %d %d", &RamenNeeded, &RamenOwned, &RamenAvailable);
		
		if(RamenOwned+RamenAvailable >= RamenNeeded)
		{
			printf("Case #%d: yes\n", i+1);
		}
		
		else
		{
			printf("Case #%d: no\n", i+1);
		}
	}
	
	
	
	
	
	
}
