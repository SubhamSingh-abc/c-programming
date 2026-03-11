/*In quality control, batch sizes must be divisible by a fixed standard size. 
Implement a solution to check whether the first number is divisible by the second number.
*/
#include <stdio.h>
int main (){
    int a , b ;
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    if(a%b==0){
        printf("first number is divisible by second number");
    }
    else{
        printf("first number is not divisible by second number");
    }
    return 0;
}