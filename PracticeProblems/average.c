//findind average
#include <stdio.h>
int main (){
    float a , b , c , total , average ;
    printf("Enter first value : ");
    scanf("%f",&a);
    printf("Enter second value : ");
    scanf("%f",&b);
    printf("Enter third value : ");
    scanf("%f",&c);
    total = a+b+c;
    average = (total)/3;
    printf("your average is : %f",average);
    return 0;
}
//avg is code for average