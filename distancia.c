#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <inttypes.h>

int main (int argc, char *argv[]){

int w = atoi(argv[1]), x = atoi(argv[2]), y = atoi(argv[3]), z  = atoi (argv[4]);
float i, n, j, a, b, c;
i = y - w;
n = z - x;
j = pow(i,2);
a = pow(n,2);
b = j + a;
c = sqrt(b);
printf("%f\n",c);
return 0;
}

