#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int main (int argc, char* argv[]){
int i, sum=0, large=0, small=atoi(argv[1]),a;
float avg,x;
for(i = 1; i < argc; i++){
sum = sum + atoi(argv[i]);
x= atoi(argv[i]);
avg= (float)sum / (argc-1);
a=atoi(argv[i]);
if(x>large)
large=x;
if(x<small)
small=atoi(argv[i]);}
printf("Total = %d\n",sum);
printf("Avarage = %f\n",avg);
printf("The largest element is %d\n",large);
printf("The smallest element is %d\n",small);
return 0;

}

