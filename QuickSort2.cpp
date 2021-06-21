#include <stdio.h>

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[], int l, int r)
{
	int pivot =arr[r];
	int i=l;
	
	for(int j=l; j<r; j++)
	{
		if(pivot>arr[j])
		{
			
			swap(&arr[i], &arr[j]);	
			i++;	
		}
	}
	swap(&arr[i], &arr[r]);
	return (i);	
	
}

void quickSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int pivot= partition (arr,l,r);
		quickSort(arr,l,pivot-1);
		quickSort(arr,pivot+1, r);
	}
	
	else
	{
		return;
	}
}
int main()
{
	int arr[]={32,52,41,3,75,85,128};
	int n=sizeof(arr)/ sizeof(arr[0]);
	
	quickSort(arr, 0, n);
	
	for (int i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
