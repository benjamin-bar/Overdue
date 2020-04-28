#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

int i, x = atoi(argv[1]);

if (x % 4 != 0 && x % 400 != 0){
printf("The year %d is not a leap year\n", x);}
else {
printf("The year %d is a leap year\n", x);}
return 0;
}
