#include <stdio.h>
#include <string.h>

int main()
{
	int t, length;
	long long int count;
	char number[200001];
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		count = 0;
		scanf("%d %[^\n]", &length, number);
		
		for(int j = 0; j < strlen(number); j++)
		{
			if(number[j] == '0')
				count++;
		}
		
		printf("Case #%d: %lld\n", i+1, count);
	}
	
	return 0;
}
