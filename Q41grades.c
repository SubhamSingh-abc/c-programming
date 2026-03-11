/*A school management system assigns grades based on marks ranges. Implement a solution to input
marks and display Grade A, B, C, or Fail
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a ;
    printf("Enter your marks : ");
    scanf("%f",&a);
    if(a>80.00){
        printf("Your grade is A ");
    }
    else if(70.00<a && a<79.00){
        printf("Your grade is B ");
    }
    else if(34.00<a && a<69.00){
        printf("Your grade is C ");
    }
    else if(0.00<a && a<33.00){
        printf("Your are fail");
    }
    return 0;
}