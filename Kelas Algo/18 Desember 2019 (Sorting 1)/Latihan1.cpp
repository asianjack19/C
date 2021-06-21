#include <stdio.h>

int number[6]={5,3,2,1,4};

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(number[j] > number [j+1])
			{
				swap(&number[j], &number[j+1]);
			}
		}
	}
}
int main()
{
	int n=5;	
	bubblesort(n);
	
	for(int i=0; i<n; i++)
	{
		printf("%d\n", number[i]);
	}
	return 0;
}
