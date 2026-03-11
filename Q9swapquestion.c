/* student wants to swap the values of two variables for practicing coding basics.
Implement a solution to swap two numbers using a temporary variable.
*/
#include <stdio.h>
int main (){
    int a , b , c;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of a is %d , value of b is %d",a,b);
    return 0;
}