#include <stdio.h>

int main(){

int Bd, Bm, By, Td, Tm, Ty;
printf("Enter Your Birthday: (Date Month Year)\n");
scanf("%d %d %d", &Bd, &Bm, &By);
printf("Enter Today's Date: (Date Month Year)\n");
scanf("%d %d %d", &Td, &Tm, &Ty);

	int a = Td - Bd;
	int b = Tm - Bm;
	int c = Ty - By;

	printf("Your Age: %d Year %d Month %d Day\n\n\n", c, b, a);
	printf("IGNORE THE NEGATIVE SIGN(S) LoL :)\n\n\n");
// Only works, if today's date and month has bigger value
return 0;
}
