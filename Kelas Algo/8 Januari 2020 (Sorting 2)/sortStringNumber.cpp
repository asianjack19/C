#include<stdio.h>
#include<string.h>
FILE *fp;
struct mhs{
	char name[20];
	int nilai;
};

void swap(struct mhs *a, struct mhs *b)
{
	struct mhs temp=*a;
	*a=*b;
	*b=temp;
}

int findPvPos(struct mhs mh[100], int l, int r)
{
	int pv1 = mh[r].nilai;
	char pv2[20];
	strcpy(pv2, mh[r].name);
	int m=l;
	for(int i=l; i<=r-1; i++)
	{
		if(mh[i].nilai<pv1)
		{
			swap(&mh[i], &mh[m]);
			m++;
		}
		else if(mh[i].nilai==pv1)
		{
			if(strcmp(mh[i].name, pv2)<0)
			{
				swap(&mh[m], &mh[i]);
				m++;
			}
		}
		
	}
	swap(&mh[r], &mh[m]);
	return m;
}
void quickSorts(struct mhs mh[100], int l, int r)
{
	if(l<r)
	{
		int pvPos=findPvPos(mh, l, r);
		quickSorts(mh, l, pvPos-1);
		quickSorts(mh, pvPos+1, r);
	}
}

int lowerBound(struct mhs mh[], int l, int r, int x)
{
	if(l<=r)
	{
		int mid=l+(r-l)/2;
//		if(mh[mid].nilai==x)
//			return mid;
		if(mh[mid].nilai>=x)
			  return lowerBound(mh, l, mid-1, x);
		else 
			  return lowerBound(mh, mid+1, r, x);
	}
	return l;
}

int upperBound(struct mhs mh[], int l, int r, int x)
{
	if(l<=r)
	{
		int mid=l+(r-l)/2;
//		if(mh[mid].nilai==x)
//			return mid;
		if(mh[mid].nilai>x)
			  return upperBound(mh, l, mid-1, x);
		else
			  return upperBound(mh, mid+1, r, x);
	}
	return l;
}


int main()
{
	struct mhs mh[100];
	fp=fopen("testdata2.txt", "r");
	int jm=0;
	while(!feof(fp))
	{
		fscanf(fp, "%s %d\n", mh[jm].name, &mh[jm].nilai);
		jm++;
	}
	
	quickSorts(mh, 0, jm-1);
	for(int i=0; i<jm; i++)
	{
		printf("%s %d\n", mh[i].name, mh[i].nilai);
	}
	
	int x;
	printf("Input score do you want to search: ");
	scanf("%d", &x);
	int hs1=lowerBound(mh,0,jm-1,x);
	int hs2=upperBound(mh,0,jm-1,x);
	for(int j=hs1; j<hs2; j++)
	{
		printf("%s\n", mh[j].name);
	}
	return 0;
}
