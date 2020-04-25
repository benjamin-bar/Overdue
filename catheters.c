
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float cat1,cat2,hyp,mult1,mult2,n;
int main(void){

printf("Enter the first catheter:\n");
scanf("%f",&cat1);
printf("Enter second cathether:\n");
scanf("%f",&cat2);
mult1 = cat1 * cat1;
mult2 = cat2 * cat2;
n = mult1 + mult2;
hyp = sqrt(n);                                                                                                          printf("The hypotenuse is:%f\n", hyp);
return 0;
}



