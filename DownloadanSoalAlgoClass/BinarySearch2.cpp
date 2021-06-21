#include <stdio.h>
int search(int arr[], int left, int right, int k)
{
	if(left<=right)
	{
		int mid=left+(right-left/2);
		if(arr[mid]==k)
		{
			return mid;
		}
		
		if(arr[mid]>k)
		{
			return search(arr, left, mid-1,k);
		}
		else
		{
			return search(arr, mid+1, right,k);
		}
	}
	else
	{
		return -1;
	
	}
		
	
	
	
	
	
	
	
	
	
}

int main()
{
	int num[110];
	int n;
	int key;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &key);
printf("key %d found at %d index", key,search(num, 0, n-1, key) )	;
	
	
	
	
	
	
}
