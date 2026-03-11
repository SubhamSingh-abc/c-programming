/*A cashier needs to add two amounts entered by a customer quickly. Implement a solution to accept two
numbers and compute their sum.
*/
#include <stdio.h>
int main(){
    float amount1;
    printf("enter amount 1 : ");
    scanf("%f",&amount1);
    float amount2;
    printf("enter amount 2 : ");
    scanf("%f",&amount2);
    printf("Total amount : %.2f",amount1+amount2);
    return 0;
}