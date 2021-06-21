#include <stdio.h>

int main()
{
	
	int x,y,k,newX,newY; 
	
	scanf("%d %d %d", &x, &y, &k);
newX= k-x;
newY=y-k;

if (newX==newY )
{
	printf("%d\n", newX);
}
else 
{
	printf("-1\n");
}
	
	
	return 0;
}
