#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	char name[110];
	int num[110];
	int result;
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		result=0;
		scanf("%s", &name);
		int len=strlen(name);
		for(int j=0; j<len-1; j++)
		{
			num[j]=name[j]-'0';
			num[j+1]=name[j+1]-'0';
			
			result+=num[j]+num[j+1];
			
//			if(result>9)
//			{
//				char nama[]=result;
//			}
		}
		
		
		printf("%d\n", result);
		
		
		
	}	
}
