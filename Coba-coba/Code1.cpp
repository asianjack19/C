#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	for(int f = 0; f < b; f++){
		printf("%d\n", a);
		a++;
	}
}
