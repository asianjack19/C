#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct karyawan
{
	char nama[110];
	char jenisKelamin[110];
	char divisi[110];
	bool kosong=true;
	bool aktif=false;
		
};

bool namaAsli(karyawan * alldata, char nama[], int index, int queries)
{
	for(int i=1; i<=queries; i++)
	{
		if((strcmp(alldata[i].nama,nama)==0)&& alldata[i].kosong==false)
		{
			return false;
		}
	}
	return true;
}

void tambahkaryawan(karyawan * alldata, int queries)
{
	getchar();
	int ind;
	for(int i=1; i<=200; i++)
	{
		if(alldata[i].kosong)
		{
			ind=i;
			break;
		}
	}


char nama1[110];
char gender1[110];
char divisi1[110];
scanf("%[^\n]", &nama1);
getchar();
scanf("%[^\n]", &gender1);
getchar();
scanf("%[^\n]", &divisi1);

if(namaAsli(alldata, nama1, ind, queries ))
{
	strcpy(alldata[ind].nama, nama1);
	strcpy(alldata[ind].jenisKelamin, gender1);
	strcpy(alldata[ind].divisi,divisi1);
	
	alldata[ind].kosong=false;
	alldata[ind].aktif=true;
}

}

void swapPos(karyawan*alldata)
{
	getchar();
	
	int p1,p2;
	
	scanf("%d %d", &p1, &p2);
	getchar();
	karyawan temp;
	
	if(alldata[p1].aktif == true && alldata[p2].aktif == true)
	{
		temp=alldata[p1];
		alldata[p1]= alldata[p2];
		alldata[p2]=temp;
	}
}


void pecat(karyawan * alldata)
{
	int ind;
	getchar();
	scanf("%d", &ind);
	getchar();
	
	alldata[ind].kosong=true;
	alldata[ind].aktif=false;
	
}

void pensiun(karyawan*alldata)
{
	int ind;
	getchar();
	scanf("%d", &ind);
	getchar();
	alldata[ind].aktif=false;
	alldata[ind].kosong=false;
}

int main()
{
	
	int Q;
	scanf("%d", &Q);
	getchar();
	int X=Q;
	karyawan alldata[105];
	
	while(Q--)
	{
		int type;
		scanf("%d", &type);
		switch(type)
		{
			case 1: tambahkaryawan(alldata,X);
				break;
			case 2: swapPos(alldata);
			break;
			case 3: pecat(alldata);break;
			case 4: pensiun(alldata);break; 
		}
	}
	
	for(int i=1; i<=X; i++)
	{
		if((alldata[i].aktif))
		{
			printf("%s\n", alldata[i].nama);
		}
	}
	getchar();
	return 0;
}

















