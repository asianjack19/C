#include <stdio.h>

int main()
{
	int T;
	int baris;
	int stack[105];
	int perimeter=0;
	int luas=0;
	int sisa;
	int baru;
	FILE*fp=fopen("testdata.in", "r");
	
	fscanf(fp,"%d", &T);
	
	for(int i=0; i<T; i++)
	{
		perimeter=0;
		luas=0;
		
		fscanf(fp, "%d", &baris);
		
		for(int j=0; j<baris; j++)
		{
			fscanf(fp,"%d", stack[j]);
			
		}
		
		for(int j=0; j<baris; j++)
		{	
		
			if(baris=j+1)
			{
				stack[j+1]=0;
			}
			if(stack[j]>stack[j+1])
			{
				sisa=0;		
				sisa=stack[j]-stack[j+1];
				sisa*=2;
				perimeter+=((stack[j]*2)-1)*2 + sisa;
				luas+=stack[j]*4;
			}
			
			else if(stack[j]<=stack[j+1])
			{
				perimeter+=((stack[j]*2)-1)*2;
				luas+=stack[j]*4;
			}
		}
		printf("Case #%d: %d %d", i+1,perimeter, luas);
	}
	fclose(fp);
	return 0;
	
}


