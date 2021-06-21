#include <stdio.h>

int process(int X1, int Y1, int A, int B)
{
	int Z=(A+1)/2;
	Z=(Z>(B+1)/2)? Z: (B+1)/2;
	Z= (Z>(A+B+2)/3)? Z: (A+B+2)/3;
	Z=Z+ ((Z+A+B)%2);
	
	if(X1== 1 && Y1==1)
	{
		if(A==1 && B==1)
		{
			return 4;
		}
	}
	
	if(A==2 && B==2)
	{
		return 4;
	}
	
	if(A==0 && B==1)
	{
		return 3;
	}
	
	if(A==1 && B==0)
	{
		return 3;
	}
	return Z;
}

int main()
{
	int T, move;
	int a1,b1, a2, b2, x,y;
	int angka[]={1,2,3,4,5,6,7,8};
	char huruf[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	char pos1[5], pos2[5];
	int Temp;	
	scanf("%d", &T);
	
	for(int i=0; i<T; i++)
	{
		scanf("%d", &move);
		getchar();
		
		scanf("%s %s", pos1, pos2);
		
		for(int j=0; j<8; j++)
		{
			if(pos1[0]==huruf[j])
			{
				a1=angka[j];
				break;
			}
		}
		
		b1=pos1[1]-'0';
		
		for(int j=0; j<8; j++)
		{
			if(pos2[0]==huruf[j])
			{
				a2=angka[j];
				break;
			}
		}
		
		b2=pos2[1]-'0';
		y=(b2-b1>=0)? b2-b1 : b1-b2;
		x=(a2-a1>=0)? a2-a1 : a1-a2;
		
		Temp=process(a1, b1, x,y);
		
		printf("Case #%d: ", i+1);
		
		if(Temp<=2*move)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}	
	}
	
}
