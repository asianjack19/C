#include <stdio.h>



int main()
{
	int T;
	char Name[105];
	char NIM[105];
	char umur[105];
	char kodepos[100];
	char Tempat[105];
	char tanggal[105];
	char SMA[105];
	char Saudara[105];
	char Tinggi[1005];
	char rekening[100];
	
	
		
	scanf("%d", &T);
	
	for (int i=0; i<T; i++ )
	{
		getchar();
		scanf("%[^\n]", Name);
		
		getchar();
		scanf("%[^\n]", NIM);
		
		getchar();
		scanf("%[^\n]", umur);
		
		getchar();
		scanf("%[^\n]", kodepos);		
		
		getchar();
		scanf("%[^\n]", Tempat);
		
		getchar();
		scanf("%[^\n]", tanggal);
		
		getchar();
		scanf("%[^\n]", SMA);
		
		getchar();
		scanf("%[^\n]", Saudara);
		
		getchar();
		scanf("%[^\n]", Tinggi);
		
		getchar();
		scanf("%[^\n]", rekening);
		
		printf("Mahasiswa ke-%d:\n", i+1);
		printf("Nama: %s\n", Name  );
		printf("NIM: %s\n", NIM);
		printf("Umur: %s\n", umur);
		printf("Kode Pos: %s\n", kodepos);
		printf("Tempat Lahir: %s\n", Tempat);
		printf("Tanggal Lahir: %s\n", tanggal);
		printf("Almamater SMA: %s\n", SMA);
		printf("Jumlah Saudara Kandung: %s\n", Saudara);
		printf("Tinggi Badan: %s\n", Tinggi);
		printf("NOMOR REKENING: %s\n", rekening);
	}
	return 0;
}
