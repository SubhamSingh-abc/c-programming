#include <stdio.h>
#include <math.h>
int main (){
    float num , result; 
    printf("Enter the number you want to find sqaure root of : ");
    scanf("%f",&num);
    result = sqrt(num);
    printf("Sqaure root of the given number is : %.2f",result);
    return 0;
}