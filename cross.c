#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc, char**argv){
int a1 = atoi(argv[1]),a2 = atoi(argv[2]),a3 = atoi(argv[3]),b1 = atoi(argv[4]),
b2 = atoi(argv[5]),b3 = atoi(argv[6]);
int op1 = ((a2*b3)) - ((a3*b2));
int op2 = ((a3*b1)) - ((a1*b3));
int op3 = ((a1*b2)) - ((a2*b1));
printf("x3 = %d\n",op1);
printf("y3 = %d\n",op2);
printf("z3 = %d\n",op3);
return 0;
}

