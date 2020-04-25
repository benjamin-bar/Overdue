#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*instructions: write the values of the A matrix left to right (a11...a33) for a matrix 3X3, when done,
proceed introducing in the same manner the values for the B matrix*/
int main(int argc, char**argv){
int a11 = atoi(argv[1]),a12 = atoi(argv[2]), a13 = atoi(argv[3]), a21 = atoi(argv[4]),
a22 = atoi(argv[5]), a23 = atoi(argv[6]),a31 = atoi(argv[7]), a32 = atoi(argv[8]), a33 = atoi(argv[9]),
b11 = atoi(argv[10]), b12 = atoi(argv[11]), b13 = atoi(argv[12]), b21 = atoi(argv[13]), b22 = atoi(argv[14]),
b23 = atoi(argv[15]), b31 = atoi(argv[16]), b32 = atoi(argv[17]), b33 = atoi(argv[18]), multa1, multa2,
multa3, multb1, multb2, multb3, multc1, multc2, multc3;
multa1 = (a11 * b11) + (a12 * b21) + (a13 * b31);
multa2 = (a11 * b12) + (a12 * b22) + (a13 * b32);
multa3 = (a11 * b13) + (a12 * b23) + (a13 * b33);
multb1 = (a21 * b11) + (a22 * b21) + (a23 * b31);
multb2 = (a21 * b12) + (a22 * b22) + (a23 * b32);
multb3 = (a21 * b13) + (a22 * b23) + (a23 * b33);
multc1 = (a31 * b11) + (a32 * b21) + (a33 * b31);
multc2 = (a31 * b12) + (a32 * b22) + (a33 * b32);
multc3 = (a31 * b13) + (a32 * b23) + (a33 * b33);
printf("|%d  %d  %d|\n", multa1, multa2, multa3);
printf("|%d  %d  %d|\n", multb1, multb2, multb3);
printf("|%d  %d  %d|\n", multc1, multc2, multc3);
return 0;
}
