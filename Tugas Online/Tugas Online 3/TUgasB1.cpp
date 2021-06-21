#include <iostream>

using namespace std;

int main()
{
	int N;
	char x;
	
	cin >> N;
	
	char box[N][N];
	for(int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			cin >>x;
			box[i][j]=x;
		}
	}
	
	for (int k=N-1; k>=0; k--)
	{
		for(int l=N-1; l>=0; l--)
		{
			cout<<box[k][l];
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	
	
}
