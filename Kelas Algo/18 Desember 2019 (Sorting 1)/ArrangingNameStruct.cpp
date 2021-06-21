#include <stdio.h>
#include <string.h>
struct mhs
{
	char name[20];
	int score;
};

struct mhs mh[5];

void swap(struct mhs*a, struct mhs*b)
{
	struct mhs temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(strcmp(mh[j].name, mh[j+1].name)>0)
			{
				swap(&mh[j].name, &mh[j+1].name);
			}
		}
	}
}

int main()
{
	strcpy(mh[0].name, "Irene");
	mh[0].score=100;
	
	strcpy(mh[1].name, "Ani");
	mh[1].score=70;
	
	strcpy(mh[2].name, "Joko");
	mh[2].score=90;
	
	
	
	for(int i=0; i<5; i++)
	{
		printf("%s %d\n", mh[i].name, mh[i].score);
	}
	return 0;
}
