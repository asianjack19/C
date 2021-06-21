#include <stdio.h>
#include <string.h>

int main()
{
	char input[100000];
	
	scanf("%[^\n]", &input);
	
	for (int i=0; i< strlen(input); i++)
	{
		if (input[i]>='a'&& input[i]<='z')
		{
			input[i]=input[i]-32;
		}
		
		
		
		if (input[i]=='I')
		{
			input[i]='1';
		}
				if (input[i]=='R')
		{
			input[i]='2';
		}
				if (input[i]=='E')
		{
			input[i]='3';
		}
				if (input[i]=='A')
		{
			input[i]='4';
		}
				if (input[i]=='S')
		{
			input[i]='5';
		}
				if (input[i]=='G')
		{
			input[i]='6';
		}
				if (input[i]=='T')
		{
			input[i]='7';
		}
				if (input[i]=='B')
		{
			input[i]='8';
		}
				if (input[i]=='P')
		{
			input[i]='9';
		}
				if (input[i]=='O')
		{
			input[i]='0';
		}
		
		
	}
	
	
	
	
	
	
	printf("%s\n", input);
	
	return 0;
}
