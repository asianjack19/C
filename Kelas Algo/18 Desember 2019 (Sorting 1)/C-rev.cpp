#include <stdio.h>

void printLetter(int n)
{
	printf("A");
	if(n <= 1)
		return;
	printLetter(n-1);
	printf("%c", 'A' + n);
}

int main()
{
	int n, t;
	scanf("%d", &t);
	
	for(int i = 0; i < t;i++)
	{
		scanf("%d", &n);
		printLetter(n);
	}
}
