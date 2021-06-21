#include <stdio.h>














int main()
{
	int T, i, j, count=0, flag=0;
	
	int numRow=0, numKolom=0;
	char row[100][100];
	
	scanf("%d", &T);
	
	for ( int x =0; x < T; x++)
	{
		scanf("%d %d", &numRow, &numKolom);
		
		for (i=0; i < numRow; i++)
		{
			for(j=0; j < numKolom; j++)
			{
				getchar();
				scanf("%c", row[i][j]);	
			}
		}
		
		printf("Case #%d: ", x+1);
		
		for (i=0; i < numRow; i++)
		{
			for(j=0; j < numKolom; j++)
			{
				if (row[i][j]=='P' && row[i+1][j] == '#' && row[i-1][j]=='#' && row[i][j+1] == '#' && row[i][j-1]=='#' )
				{
					flag=1;
					break;
				}				
				else if(row[i][j]== 'P')
				{
					
					if(row[i][j+1] == '.')
					{
						row[i][j+1]= 'P';
						row[i][j]='#';
					}
					
					else if(row[i][j+1] == '#')
					{
						row[i][j+1]= '#';
						row [i][j] = 'P' ;
					}
					
					else if(row[i][j+1] == '*')
					{
						row[i][j+1]= 'P';
						row [i][j] = '#' ;
						count+=1;
					}					
					
					else if(row[i][j-1] == '.')
					{
						row[i][j-1]= 'P';
						row[i][j]='#';
					}
					
					else if(row[i][j-1] == '#')
					{
						row[i][j-1]= '#';
						row [i][j] = 'P' ;
					}
					
					else if(row[i][j-1] == '*')
					{
						row[i][j-1]= 'P';
						row [i][j] = '#' ;
						count+=1;
					}		
					
										
					else if(row[i+1][j] == '.')
					{
						row[i+1][j]= 'P';
						row[i][j]='#';
					}
					
					else if(row[i+1][j] == '#')
					{
						row[i+1][j]= '#';
						row [i][j] = 'P' ;
					}
					
					else if(row[i+1][j] == '*')
					{
						row[i+1][j]= 'P';
						row [i][j] = '#' ;
						count+=1;
					}								

					else if(row[i-1][j] == '.')
					{
						row[i-1][j]= 'P';
						row[i][j]='#';
					}
					
					else if(row[i-1][j] == '#')
					{
						row[i-1][j]= '#';
						row [i][j] = 'P' ;
					}
					
					else if(row[i-1][j] == '*')
					{
						row[i-1][j]= 'P';
						row [i][j] = '#' ;
						count+=1;
					}					
				}
			}
		}
		
		if(flag==1)
		{
			printf("0");
		}
		else 
		{
			printf("%d", count);
		}
	}
	return 0;
}
