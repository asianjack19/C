#include <stdio.h>
int main()
{

float Price1, Price2, Price3, Price4;
float disc1, disc2, disc3, disc4;


scanf("%f %f\n", &disc1, &Price1);
scanf("%f %f\n", &disc2, &Price2);
scanf("%f %f\n", &disc3, &Price3);
scanf("%f %f", &disc4, &Price4);


 float HargaAwal1= Price1*100/(100-disc1);
float HargaAwal2= Price2*100/(100-disc2);
float HargaAwal3= Price3*100/(100-disc3);
float HargaAwal4= Price4*100/(100-disc4);
 
printf("$ %f\n", HargaAwal1);
printf("$ %f\n", HargaAwal2);
printf("$ %f\n", HargaAwal3);
printf("$ %f ", HargaAwal4);

return 0;
}
