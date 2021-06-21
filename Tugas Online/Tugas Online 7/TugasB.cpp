#include <stdio.h>

int main()
{
	int T;
	int baris;
	int stack[200];
	int perimeter=0;
	int luas=0;
	int sisa;
		
		FILE *fp=fopen("testdata.in", "r");
	
	fscanf(fp,"%d", &T);
	
	for(int i=0; i<T; i++)
	{
		perimeter=0;
		luas=0;
		baris=0;
		fscanf(fp, "%d", &baris);
		
		for(int j=0; j<baris; j++)
		{
			fscanf(fp,"%d", &stack[j]);
			luas+=stack[j]*4;
		}
			perimeter+=baris*4+stack[0]*2+ stack[baris-1]*2;
		for(int j=0; j<baris-1; j++)
		{	
			sisa=stack[j]-stack[j+1];
			if(sisa<0)
			{
				sisa*=-1;
			}
			perimeter+=(sisa*2);
		}
		printf("Case #%d: %d %d\n", i+1,perimeter, luas);
	}
	fclose(fp);
	return 0;
	
}
