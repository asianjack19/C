#include <stdio.h>

int binarySearch(int arr[], int l,int r, int key)
{
	if(r>=l)
	{
		int mid= l+(r-l)/2;
		
		if(arr[mid]==key)
		{
			return mid;
		}
		
		if(arr[mid]>key)
		{
			return binarySearch(arr,l, mid-1, key);
		}
		
		else
		{
			return binarySearch(arr, mid+1, r, key);
		}
	}
	
	return -1;
}


int main()
{
	int arr[]= {23,32,37,43,65,72, 85};
	int n=sizeof(arr)/ sizeof(arr[0]);
	
	int key=85;
	
	int result=binarySearch(arr, 0, n-1, key );
	
	if(result == -1)
	{
		printf("Not Found !\n");
	}
	
	else 
	{
		printf("%d Found at index %d",key, result );
	}
	return 0;
}
