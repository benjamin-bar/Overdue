#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
int x = atoi(argv[1]), y = atoi(argv[2]), z = atoi(argv[3]);

if (x > y && x > z) {

if (y > z) {
printf ( "%d %d %d\n", x,y,z);}
else {
printf ("%d %d %d\n", x,z,y);}
}

else if (y > x && y > z) {
if (x > z){
printf ("%d %d %d\n",y,x,z);}
else{
printf ("%d %d %d\n",y,z,x);}
}

else if (z > x && z > y){
if(x > y){
printf ("%d %d %d\n", z,x,y);}
else {
printf ("%d %d %d\n",z,y,x);}
}

return 0;
}
