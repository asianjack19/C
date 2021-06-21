#include <stdio.h>
#include <string.h>

char name[6][105]={"Irene", "Ani", "Darren", "Budi", "Joko"};

void swap(char a[], char b[])
{
	char temp[100];	
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}

int main()
{
	int n=6;
	
	for(int i=0; i<n; i++ )
	{
		for(int j=0; j<n-1; j++)
		{
			if(strcmp(name[j], name[j+1])>0)
			{
				swap(name[j], name[j+1]);
			}
		}
	}
		
	for(int i=0; i<n; i++)
	{
		printf("%s\n", &name[i]);
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
