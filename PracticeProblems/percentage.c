#include <stdio.h>
int main (){
int a=79 , b=87, c=76;
int total=a+b+c;//here total is taken by us (it's not part of code)
float percentage=(total)/300.0*100;//here percentage is taken by us (it's not part of code)
printf("a=%d\nb=%d\nc=%d\ntotal marks=%d\nmy percent=%.2f",a,b,c,total,percentage);
return 0;
}