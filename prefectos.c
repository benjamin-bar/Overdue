#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int x = atoi(argv[1]), y = 0, i;

for (i = 1; i < x; i++){
if (x % i == 0){
y = y + i;}
}
if (y == x){
printf("%d is a perfect number\n", x);}
else{
printf("%d is not a perfect number\n", x);}
return 0;
}
