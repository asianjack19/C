#include <stdio.h>

int main()
{
	int T;
	int baris;
	int stack[105];
	int perimeter=0;
	int luas=0;
	int sisa;
	int sisa2;
	int baru;
	

	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		perimeter=0;
		luas=0;
		
		scanf( "%d", &baris);
		
		for(int j=0; j<baris; j++)
		{
			scanf("%d", &stack[j]);
			
		}
		
		for(int j=0; j<baris; j++)
		{	
			if(j==0)
			{
				sisa=0;		
				sisa=stack[j]-stack[j+1];
				if(sisa>0)
				{		
					sisa*=2;
					perimeter+=((stack[j]*2)+4)+ sisa;
					luas+=stack[j]*4;	
				}		
				else
				{
					perimeter+=	((stack[j]*2)+4);
					luas+=stack[j]*4;
				}		
			}
			
			else if(j==baris-1)
			{
				sisa=0;
				sisa=stack[j]-stack[j-1];
				if(sisa>0)
				{		
					sisa*=2;
					perimeter+=((stack[j]*2)+4)+ sisa;
					luas+=stack[j]*4;	
				}		
				else
				{
					perimeter+=	((stack[j]*2)+4);
					luas+=stack[j]*4;
				}
			}
			
			else 
			{
				sisa=stack[j]-stack[j+1];
				sisa2=stack[j]-stack[j-1];
				
				if(sisa>0)
				{
					sisa*=2;
				}
				else
					sisa=0;
				
				
				if(sisa2>0)
				{
					sisa2*=2;
				}
				
				
				else
					sisa2=0;
				
				
				perimeter+=sisa+sisa2+4;
				luas+=stack[j]*4;
			}
			
			
		}
		printf("Case #%d: %d %d\n", i+1,perimeter, luas);
	}


	return 0;
	
}


