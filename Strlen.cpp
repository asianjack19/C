#include <stdio.h>
#include <string.h>

int main()
{
	char name[110];
	
	scanf("%[^\n]", name);
	
	int len = strlen(name);
	
	printf("%d", len);
}
