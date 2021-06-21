#include <stdio.h>

int main()
{
	int n, t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		
		printf("Case #%d: ", i+1);
		if(n == 1)
			printf("A\n");
		else if (n == 2)
			printf("ABA\n");
		else if (n == 3)
			printf("ABACABA\n");
		else if (n == 4)
			printf("ABACABADABACABA\n");
		else if (n == 5)
			printf("ABACABADABACABAEABACABADABACABA\n");
//		else if (n == 6)
//			printf("")
	}
}
