#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
int r, y, n = atoi(argv[1]), t = 0, s;
y = n;
s = n;
while (n > 0 || n < 0) {
r = n % 10;
t = (t * 10) + r;
n = n / 10;}
if (s == t){
printf ("%d is a palindrome number\n", y);}
else {
printf ("%d is not a palindrome number\n", y);}

return 0;
}
