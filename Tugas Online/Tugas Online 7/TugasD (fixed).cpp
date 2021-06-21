#include <stdio.h>

int main()
{
	int T;
	int mapsize;
	int time, x, y;
	char map[101][101];
	int Dx,Dy;
	FILE*fp=fopen("testdata.in","r");
	int temp;

	fscanf(fp,"%d", &T);
	for(int i=0; i<T; i++)
	{
		fscanf(fp,"%d %d", &mapsize, &time);
		for(int j=0; j<mapsize; j++)
		{
			fgetc(fp);
			for (int k=0; k<mapsize; k++)
			{
				fscanf(fp,"%c", &map[j][k]);
				if(map[j][k] == 'F')
				{
					x = j;
					y = k;
				}
			}
		}
		fscanf(fp,"\n", &temp);
	for(int j = 0; j <mapsize; j++){
			for(int k = 0; k<mapsize; k++){
				Dx = x-j;
				Dy = y-k;
				if(Dx<time && Dx>-time && Dy<time && Dy>-time){
					if(map[j][k] == '#'){
						map[j][k] = 'F';
					}
				}
			}
		}
	
		
		
		printf("Case #%d:\n", i+1);
		
		for(int j=0; j<mapsize; j++)
		{
			for (int k=0; k<mapsize; k++)
			{
				printf("%c", map[j][k]);
			}
			printf("\n");
			
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
