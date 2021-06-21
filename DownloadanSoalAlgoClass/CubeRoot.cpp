#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() 
{ 
int num, ans; 
clrscr(); 
printf("Enter any number: "); 
scanf("%d",&num); 
ans=pow(num, 1.0/3.0);
ans++;
printf("\n\Cube of %d is: %d",num,ans); 
getch(); 
}
