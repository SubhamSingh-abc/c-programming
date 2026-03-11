/*A payroll system categorizes employees based on their basic salary into low, medium, or high.
Implement a solution to classify salary category using nested if.
*/
#include <stdio.h>
int main (){
    float a;
    printf("Enter basic salary : ");
    scanf("%f",&a);
    if(a>80000){
        printf("Your salary is high ");
    }
    if(a>40000 && a<79999){
        printf("Your salary is medium ");
    }
    if(a>0 && a<39999){
        printf("Your salary is low ");
    }
    return 0;
}
