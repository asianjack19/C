#include <stdio.h>

int calculate(int N)
{
	if(N==0)
	{
		return 0;
	}
	
	else 
	{
		return N+calculate(N-1);
	}
}







int main()
{
	int input;
	
	scanf("%d", &input);
	int n= ++input;
	int hasil=calculate(n);
	printf("%d\n", hasil);
	
	
	
	
	
	
	return 0;
}
