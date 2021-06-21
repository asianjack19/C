#include <stdio.h>
#include <string.h>

int main()
{
	int len;
	char nama[11000];
	
	scanf("%[^\.]", &nama);
	
	len=strlen(nama);
	
	for(int i=0; i<len; i++ )
	{
		if (nama[i]>='A' && nama[i]<='Z')
		{
			if(i%2==0)
			{
				continue;
			}
		
			else 
			{
				nama[i]=nama[i]+32;
			}
		}
		else if (nama[i]>='a' && nama[i]<='z')
		{
			if(i%2==0)
			{
				continue;
			}
		
			else 
			{
				nama[i]=nama[i]-32;
			}
		}
	}
printf("\n%s\n", nama);
	return 0;
}
