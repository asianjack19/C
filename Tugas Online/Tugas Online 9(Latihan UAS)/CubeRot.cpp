#include <stdio.h>
#include <math.h>

int main()
	
{
	FILE*fp=fopen("testdata.in","r");
	int T;
	fscanf(fp,"%d", &T);

	for(int i=0; i<T; i++)
	{
		long long int n;
		fscanf(fp,"%lld",&n );
    	long long int cubeRoot;
    	cubeRoot =  cbrt(n);
    	printf("Case #%d: %lld\n", i+1, cubeRoot);
	}
	

    return 0;
}
