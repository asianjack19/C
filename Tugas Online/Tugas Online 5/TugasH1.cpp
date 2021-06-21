#include <stdio.h>
int count;
int row, kolom;
char field[105][105];

void process(int X, int Y)
{
	if(X<0 || Y<0)
	{
		return;
	}
	
	if(X> row -1 || Y >kolom-1)
	{
		return;
		
	}
	if(X>row)
	{
		return;
	}
	
	if (field[X][Y] == '#')
	{
		return;
	}
	
	if (field[X][Y] == '*')
	{
		count+=1;
	}
	
	process(X+1, Y);
	process(X-1, Y);
	process(X, Y+1);
	process(X, Y-1);
	
}

int main()
{
	int T, X, Y, flag;
	
	
	scanf("%d", &T);
	
	for (int i=0; i<T; i++)
	{
		scanf("%d %d", &row , &kolom);
		getchar();
		count=0;
		flag=0;
		
		for (int j=0; j<row; j++)
		{
			for (int k=0; k<kolom; k++)
			{
					field [j][k]='0';
			}
		}
		
		for (int j=0; j<row; j++)
		{
			for (int k=0; k< kolom; k++)
			{	
				
				scanf("%c", &field[j][k]);
			}
			getchar();
		}
		
		for(int j=0; j<row; j++)
		{
			for (int k=0; k<kolom; k++)
			{
				if(field[j][k]=='P')
				{
					X=j;
					Y=k;
					flag=1;
				}
			}
		}
		
		if (flag==1)
		{
			process(X,Y);
		}
		printf("Case #%d: %d", i+1, count);
	}
	
	
	
	
	
	
	
	return 0;
}
