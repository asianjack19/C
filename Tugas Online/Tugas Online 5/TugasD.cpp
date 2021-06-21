#include <stdio.h>

int main()
{
	int T, N, m[55][55], m2[55][55], x, y, k;
	int a[55][55];
	int b[55][55];
	int c[55][55];
	
	scanf("%d", &T);
	for (int i=0; i<T; i++)
	{
		scanf("%d", &N);
		
		
		
		for( x = 0; x < N; x++)
		{
		
        	for( y = 0; y < N; y++)
        	{
            
            	scanf("%d", &a[x][y]);
        	}
        
    	}
			printf("\n");
		for( x = 0; x < N; x++)
		{
        	for( y = 0; y < N; y++)
        	{
            	scanf("%d", &b[x][y]);
        	}
    	}
    		printf("\n");
    	
    	for( x = 0; x < N; x++)
		{
        	for( y = 0; y < N; y++)
        	{
            	scanf("%d", &c[x][y]);
        	}
    	}
    		printf("\n");
    		
    		
    	 for( x = 0; x < N; x++)
		 {
        	for( y = 0; y < N; y++)
        	{
            	m[x][y]=0;
        	}
         }
    	
    	
    	
    	for( x = 0; x < N; x++)
		 {
        	for( y = 0; y < N; y++)
        	{
            	m2[x][y]=0;
        	}
    	 }
    	
    		
    		printf("Case #%d:\n", i+1);
    		
    		
    	 for( x = 0;  x < N; x++)
    	 {
		 
        		for( y = 0; y < N; y++)
				{
				
            		for(int z = 0; z < N; z++)
            		{
                		m[x][y] += a[x][z] * b[z][y];
            		}
            	}
		 }
		 
		 
		 
		 
		 
		 
		 
	     for( x = 0;  x < N; x++)
    	 {
		 
        		for( y = 0; y < N; y++)
				{
				
            		for(int z = 0; z < N; z++)
            		{
                		m2[x][y] += m[x][z] * c[z][y];
            		}
            	}
		 }	 
		 
		 
		 
		 
		for (int x=0; x<N; x++)
		{
			for (int y=0; y<N; y++)
			{	
				if (x== N-1) 
				{
					if(y== N-1  )
					{
						printf("%d\n", m2[x][y]);
					}
				
					else 
					{
						printf("%d ", m2[x][y]);
					}
				}
				
				if (x!=N-1)
				{
					if(y== N-1 )
					{
						printf("%d\n", m2[x][y]);
					}
				
					else 
					{
						printf("%d ", m2[x][y]);
					}	
				}
	
				
				
				
			}
		
		}
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
