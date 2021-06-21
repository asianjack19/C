#include <stdio.h>

int main(){
int input;
int num_ofInput;
int n=0;
scanf("%d", &input);
for (int i=1; i<=input; i++){
	scanf("%d", &num_ofInput);
	n+=num_ofInput;
	if(n==12)
	{
		n=28;
	}
	if (n>=40)
	{
		n-=40;
	}
	if(n==30)
	{
		n=10;
	}
	if (n==35)
	{
		n=7;
	}
}
printf("%d\n", n);


	return 0;
}
