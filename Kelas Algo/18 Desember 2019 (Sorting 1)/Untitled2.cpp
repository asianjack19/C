#include <stdio.h>
#include <string.h>

int main()
{
	
	char string[100002];
	char kapital[27]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int len;
	
	FILE*fp=fopen("testdata.in", "r");
	
	fscanf(fp,"%[^\n]", &string);
	len=strlen(string);
	
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<27; j++)
		{
			if(string[i]==' ')
			{
				string[i]=string[i+1];
			}
			
			if(string[i]==kapital[j])
			{
				string[i]='\0';
			}

		}
		
	}
	
	printf("%s\n", string);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
