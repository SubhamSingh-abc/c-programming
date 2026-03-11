#include <stdio.h>
int main (){
    int a ;
    printf("Enter your age : ");
    scanf("%d",&a);
    a>=18?printf("Your are eligible for voting"):printf("Your are not eligible for voting");
    return 0;
}