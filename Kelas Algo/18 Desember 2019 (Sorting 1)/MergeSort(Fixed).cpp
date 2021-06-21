#include<stdio.h>

void merge(int number[], int low, int mid, int high)
{
	int n1 = mid-low+1;
	int n2 = high-mid;
	
	int L[n1], R[n2];
	for(int i=0; i<n1; i++)
		L[i]=number[low+i];
	for(int j=0; j<n2; j++)
		R[j]=number[mid+1+j];
		
	int i=0,j=0,k=low;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			number[k]=L[i];
			i++;
		}
		else
		{
			number[k]=R[j];
			j++;
		}
		k++;
	}
		
		while(i<n1)
		{
			number[k]=L[i];
			i++;
			k++;
		}
		
		while(j<n2)
		{
			number[k]=R[j];
			j++;
			k++;
		}
}

void mergeSort(int number[], int low, int high)
{
	if(low<high)
	{
		int mid=low+(high-low)/2;
		mergeSort(number, low, mid);
		mergeSort(number, mid+1, high);
		merge(number, low, mid, high);
	}
}
int main()
{
	int number[6]={5,3,2,1,4};
	mergeSort(number, 0, 4);
	for(int i=0; i<5; i++)
	{
		printf("%d ", number[i]);
	}
	return 0;
}
