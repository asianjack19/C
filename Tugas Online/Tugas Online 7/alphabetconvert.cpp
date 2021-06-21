#include<stdio.h>
#include<string.h>

int main()
{
	int T, num, len;
	char string[101];
	char huruflama[27];
	char hurufbaru[27];
	int count[27];
	FILE*fp= fopen("testdata.in", "r");
	
	fscanf(fp,"%d\n", &T);
	for(int i=0; i<T; i++)
	{
		char alpha[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		
		for(int j=0; j<26; j++)
		{
			count[j]=0;
		}
		
		fscanf(fp, "%s\n", string);
		fscanf(fp, "%d\n", &num);
		
		for(int j=0; j<num; j++)
		{
			fscanf(fp,"%c %c\n", &huruflama[j], &hurufbaru[j]);
			
		}
		
		len=strlen(string);
		
		for(int k=0; k<num; k++)
		{
			for(int l=0; l<len; l++)
			{
				if(string[l]==huruflama[k])
				{
					if(alpha[huruflama[k]-'A']!='*')
					{
						string[l]=hurufbaru[k];
					}
				}
			}
			alpha[huruflama[k]-'A']='*';
		}
		
		for(int k=0; k<len; k++)
		{
			count[string[k]-'A']++;
		}
		
		for(int k=0; k<26; k++)
		{
			if(count[k]>0)
			{
				printf("%c %d\n", 'A'+k, count[k]);
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
}
