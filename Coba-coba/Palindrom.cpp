#include <stdio.h>
#include <string.h>

int main()
{
	int input;
	char word[105];
	
	
	scanf("%d", &input);
	for(int i=0; i<input; i++)
	{
		getchar();
		scanf("%s", &word);
		
		int len=strlen(word);
		
		int n=len-1;
		int counter=0;
		
		for(int i=0; i<len; i++)
		{
			if( word[i]!=word[n])
			{
				counter=1;
				break;
			}
			n--;
		
		}	
		printf("Case #%d: \n", i+1);
		
		if(counter==1)
		{
		
			printf("Not Palindrome\n");
		}
		
		else
		{
			printf("Palindrome\n");
		}
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
