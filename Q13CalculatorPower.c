/*A bank wants to provide exact maturity amount on savings deposits. Implement a solution to compute
Compound Interest
*/
#include <stdio.h>
#include <math.h>
int main (){
    float base1 , power1 , NumAFPower;
    printf("Enter number : ");
    scanf("%f",&base1);
    printf("Enter power : ");
    scanf("%f",&power1);
    NumAFPower = pow(base1,power1);
    printf("Result : %f",NumAFPower);
    return 0;
}