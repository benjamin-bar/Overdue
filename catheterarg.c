#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int main (int argc, char* argv[]){
int x, y, mult1, mult2, n;
float hyp;

mult1 = atoi(argv[1]) * atoi(argv[1]);
mult2 = atoi(argv[2]) * atoi(argv[2]);
n = mult1 + mult2;
hyp = sqrt(n);
printf("%f\n", hyp);
return 0;
}

