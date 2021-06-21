#include <stdio.h>

void swap(int *x, int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int arr[], int l, int r)
{
	int pivot=arr[r];
	int i=l;

	for(int j=l; j<r;j++)
	{
		if(pivot <arr[j])
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[r]);
	
	return i;
	
	
}




void quicksort(int arr[],int l,int r)
{
	if(r>l)
	{
		int pivot=partition(arr,l,r);
		quicksort(arr,l,pivot-1);
		quicksort(arr,pivot+1,r);
	}
	
	else
	{
		return;
	}
}
int main()
{
	int T;
	int arr[10005];
	scanf("%d", &T);
	for(int i=0; i<T; i++)
	{
		scanf("%d", &arr[i]);
	}
		quicksort(arr,0,T);
	
		for(int i=T-1; i>=0; i--)
	{
		printf("%d", arr[i]);
	}
	

	
	
	
	
	
	
}
