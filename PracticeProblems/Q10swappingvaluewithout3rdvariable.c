/* A programmer wants to optimize memory and avoid using extra variables while swapping two values.
Implement a solution to swap two numbers without using a third variable
*/
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a is %d and value of b is %d",a,b);
    return 0;
}



