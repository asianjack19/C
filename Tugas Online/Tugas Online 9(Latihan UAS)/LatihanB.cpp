#include <stdio.h>

int main()
{
	long long int N;
	long int Num[10005];
	long long int Q;
	long long int querry[10005];
	long long int countGenap;
	long long int countGanjil;
	
	scanf("%lld", &N);
	for(long long int i=0; i<N ;i++)
	{
		scanf("%lld", &Num[i]);
	}
	
	scanf("%lld", &Q);
	for(long long int i=0; i<Q; i++)
	{
		countGenap=0;
		countGanjil=0;
		scanf("%lld", &querry[i]);
		
		
		for(long long int k=0; k<N; k++)
		{
			
		if(Num[k]%2==0)
			{
				for(long long int l=k+1; l<N; l++)
				{
					if(Num[l] % 2 !=0)
					{
						continue;
					}
					
					else 
					{
						if(Num[k]+Num[l]<querry[i])
						{
							continue;
						}
						else 
						{
							countGenap+=1;
						}
					}	
				}	
			}
			else 
			{
				for(long long int l=k+1; l<N; l++)
				{
					if(Num [l]%2!=1)
					{
						continue;
					}
					
					else 
					{
						if(Num[k]+Num[l]<querry[i])
						{
							continue;
						}
						
						else 
						{
							countGanjil+=1;
						}
					}
				}		
			}
		}
	printf("Case #%d: %lld %lld\n", i+1, countGanjil, countGenap);	
	}
	return 0;
}
