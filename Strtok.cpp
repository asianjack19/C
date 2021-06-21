#include <stdio.h>
#include <string.h>

int main()
{
	char source[]={"Andrew Yule,40#5.5,400,2.5"};
	char delims[]={',','#'};
	
	char*token;
	
	token=strtok(source,delims);
	
	while(token!=NULL)
	{
		printf("%s\n", token);
		token=strtok(NULL, delims);
	}
	
	
	
	
	
}
