#include <stdio.h>

int main()
{
	long long int T;
	long long int arr[25];
	long long int hasil;
	long long int hasilAkhir;
	long long int A, B,E,D, C;
	long long int temp;	
	
	
	
	
	scanf("%lld", &T);
	for(long long int i=0; i<T; i++)
	{
		hasil=0; 
		for(int j=0; j<25; j++)
		{
			scanf("%lld", &arr[j]);
			hasil=hasil+arr[j];
		}
		
		hasilAkhir=hasil/10;
		while(true)
		{
			bool swapping = false;
			for(long long int j=0; j<24; j++)
			{
				if(arr [j] > arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					swapping=true;
				}
			}
			
			if(swapping==false)
			{
				break;
			}
		}
		
		A=arr[0]/2;
		B=arr[1]-A;
		E=arr[24]/2;
		D=arr[23]-E;
		C=hasilAkhir-(A+B+D+E);
		
		printf("Case #%lld: %lld %lld %lld %lld %lld\n", i+1, A,B,C,D,E);
	}
	return 0;
}
