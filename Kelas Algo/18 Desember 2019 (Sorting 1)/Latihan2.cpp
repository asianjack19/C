#include <stdio.h>
#include <string.h>
int main()
{
	char string[102];
	int len;
	char temp;
	
	scanf("%s", &string);
	
	len=strlen(string);
	
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len-i-1; j++)
		{
			if(string[j]>string[j+1])
			{
				temp=string[j];
				string[j]=string[j+1];
				string[j+1]=temp;	
			}
		}
	}
	
	printf("%s", string);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
