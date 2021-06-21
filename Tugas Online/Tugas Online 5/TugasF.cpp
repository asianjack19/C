#include <stdio.h>

int jabonacci(int N)
{
	if (N==0)
	{
		return 0;
	}
	
	else if (N==1 || N==2)
	{
		return 1;
	}
	
	else 
	{
		return (jabonacci(N-1) + jabonacci (N-3));
	}
	
}






int main()
{
	int input;
	scanf("%d", &input);
	int hasil=jabonacci(input);
	
	printf("%d\n", hasil);
	
	
	
	
	
	return 0;
}
