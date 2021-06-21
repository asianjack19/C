#include <stdio.h>


int main()
{
	
	int A,  B;
	FILE * fp = fopen("testdata.in","r");
	
	
	
	fscanf(fp,"%d %d", &A, &B);
	
	printf("%d\n", A+B);
	
	
	fclose(fp);
	
	
}
