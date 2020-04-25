#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
char  op;
float a, b;
printf("Enter an operator (+, -, *,/,q,p,b,s,c,t): ");
//q = sqrt, b = cbrt, p = pow, s = sen(rad), c = cos(rad), t = tan(rad)
scanf("%c", &op);
if(op == 'q' || op == 'b' || op == 's' || op == 'c' || op == 't'){
printf ("Enter a number:\n");
scanf ("%f",&a);}
else {
printf("Enter two numbers:\n");
scanf("%f%f", &a, &b);}

switch (op) {
case '+':
printf("%f + %f = %f\n", a, b, a + b);
break;
case '-':
printf("%f - %f = %f\n", a, b, a - b);
break;
case '*':
printf("%f * %f = %f\n", a, b, a * b);
break;
case '/':
printf("%f / %f = %f\n", a, b, a / b);
break;
case 'q':
printf ("square root of %f = %f\n", a, sqrt(a));
break;
case 'p':
printf("%f to the power of %f = %f\n", a, b, pow(a, b));
break;
case 'b':
printf ("cube root of %f = %f\n", a, cbrt(a));
break;
case 's':
printf("Sin of %f = %f\n", a, sin(a));
break;
case 'c':
printf ("Cos of %f = %f\n", a, cos(a));
break;
case 't':
printf ("Tan of %f = %f\n", a, tan(a));
break;
    }

    return 0;
}
