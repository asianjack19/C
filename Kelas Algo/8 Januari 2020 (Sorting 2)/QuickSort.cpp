#include <bits/stdc++.h>

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a= *b;
	*b=temp;
}

int findPvPos(int nbr[], int l, int r)
{
	int pv=nbr[r];
	int m=l;
	for(int i=l; i<=r-1; i++)
	{
		if (nbr[i]< pv)
		{
			swap(&nbr[i], &nbr[m]);
			m++;
		}
	}
	swap(&nbr[m], &nbr[r]);
	return m;
}


void quicksort(int nbr[], int l, int r)
{
	if(l<r)
	{
		int pvPos= findPvPos(nbr, l, r);
		quicksort(nbr, l, pvPos-1);
		quicksort(nbr, pvPos+1, r);
	}
	else
	{
		return;
	}
}
int main()
{
	int nbr[10]={10,40,30,50,90,80,70};
	quicksort(nbr,0,6);
	
	for(int i=0; i<7; i++)
	{
		printf("%d ", nbr[i]);
	}

	return 0;	
}
