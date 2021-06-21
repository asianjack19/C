#include <stdio.h>
#include <string.h>

int main()
{
	bool first;
	int t, flag;
	char string[200001];
	FILE *fp = fopen("testdata.in", "r");
	
	while(!feof(fp))
	{
		first = true;
		flag = 0;
		fscanf(fp, "%[^\n]\n", string);
//		printf("%s\n", string);
		char *word = strtok(string, " ");
		while(word != NULL)
		{
			flag = 0;
//			printf("%s\n", word);

			for(int i = 0; i < strlen(word); i++)
			{
				if(word[i] >= 'A' && word[i] <= 'Z')
				{
					flag = 1;
					break;
				}
			}
			
			if(flag == 0)
			{
				if(first == false)
					printf(" ");
				printf("%s", word);
				first = false;
			}
			
			word = strtok(NULL, " ");
//			if(word == NULL)
//				printf("\b");
		}
		printf("\n");
	}
	
	return 0;
}
