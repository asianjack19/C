#include <stdio.h>

struct Mahasiswa
{
	char kodeMahasiswa[100];
	char namaMahasiswa[100];
	char jenisKelaminMahasiswa[100];
	char namaAyah[100];
	char namaIbu[100];
	int saudara;
};





struct Dosen
{
	char kodeDosen[100];
	char namaDosen[50];
	char jenisKelaminDosen[100];
	struct Mahasiswa mhs[105];
};

struct Dosen sp[105];



int main()
{
	int N;
	int indexDosen;
	int jumMahasiswa[105];
	
	scanf("%d", &N);
	for(int i=0; i < N; i++)
	{	
		getchar();
		scanf("%s", &sp[i].kodeDosen);
		
		getchar();
		scanf("%s", &sp[i].namaDosen);
		
		getchar();
		scanf("%s", &sp[i].jenisKelaminDosen);
		
		scanf("%d", &jumMahasiswa[i]);
		
		for(int j=0; j < jumMahasiswa[i] ; j++)
		{
			getchar();
			scanf("%s", &sp[i].mhs[j].kodeMahasiswa );
			
			getchar();
			scanf("%s", &sp[i].mhs[j].namaMahasiswa );
			
			getchar();
			scanf("%s", &sp[i].mhs[j].jenisKelaminMahasiswa );
			
			getchar();
			scanf("%s", &sp[i].mhs[j].namaAyah);
			
			getchar();
			scanf("%s", &sp[i].mhs[j].namaIbu );
			
			getchar();
			scanf("%d", &sp[i].mhs[j].saudara);
		}
		

	}
	scanf("%d", &indexDosen);
	printf("Kode Dosen: %s\n", sp[indexDosen-1].kodeDosen);
	printf("Nama Dosen: %s\n", sp[indexDosen-1].namaDosen);
	printf("Gender Dosen: %s\n", sp[indexDosen-1].jenisKelaminDosen);
	printf("Jumlah Mahasiswa: %d\n", jumMahasiswa[indexDosen-1]);
	for(int i=0; i< jumMahasiswa[indexDosen-1]; i++)
	{
		printf("Kode Mahasiswa: %s\n", sp[indexDosen-1].mhs[i].kodeMahasiswa);
		printf("Nama Mahasiswa: %s\n", sp[indexDosen-1].mhs[i].namaMahasiswa);
		printf("Gender Mahasiswa: %s\n", sp[indexDosen-1].mhs[i].jenisKelaminMahasiswa);
		printf("Nama Ayah: %s\n", sp[indexDosen-1].mhs[i].namaAyah);
		printf("Nama Ibu: %s\n", sp[indexDosen-1].mhs[i].namaIbu);
		printf("Jumlah Saudara Kandung: %d\n", sp[indexDosen-1].mhs[i].saudara);
	}
	
		
	
	
	
	
	
	
	
	return 0;
}
