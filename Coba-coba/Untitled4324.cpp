#include <stdio.h>

int main(){

char name;
char addr;
printf(" Name: ");
get(name);
printf(" Address: ");
gets(addr);
printf("\n");
printf("Data you've inputted: \n");
printf("Name: %s \n", name);
printf("Address: %s \n", addr);

return 0;
}
