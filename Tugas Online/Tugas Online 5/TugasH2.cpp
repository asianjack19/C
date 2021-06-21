#include <stdio.h>

char field [110][110];
int r,t,count;

void ffl(int x, int y)
{
	if(x<0|| y<0)
	{
		return;
	}
	
	if (x>t-1||y>r-1)
	{
		return;
	}
	if(y>r)
	{
		return;
	}
	if(field[y][x] == '#')
	{
		return;
	}
	if (field[y][x] == '*')
	{
		count+=1;
	}
	
	field[y][x]='#';
	ffl(x+1, y);
	ffl(x-1,y);
	ffl(x,y+1);
	ffl(x,y-1);
}



int main()
{
	int T, flag, A,B,j,k;
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%d %d", &r, &t);
		getchar();
		count=0;
		flag=0;
		
		for (int j=0; j<r;j++)
		{
			for (int k=0; k<t; k++)
			{
				field[j][k]='0';
			}
		}
		
		for(int j=0; j<r; j++)
		{
			for (int k=0; k<t; k++)
			{
				scanf("%c", &field[j][k]);
			}
			getchar();
		}
		
		for(int j=0; j<r; j++)
		{
			for (int k=0; k<t; k++)
			{
				if (field[j][k]=='P')
				{
					A=k;
					B=j;
					flag=1;
				}
			}
		}
		if(flag==1)
		{
			ffl(A,B);
		}
		
		printf("Case #%d: %d\n", i+1, count);
		
	}
	return 0;
}
