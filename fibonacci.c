#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int main (void)
{
int i,a,x,y;
a = -1;
x = 1;
for(i=1;i<48;i++){
y = a+x;
x = a;
a = y;
printf("%d\n",(y*-1));
}
return 0;
}


