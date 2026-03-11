/*An HR system needs to calculate employees’ net salaries including a fixed 12% bonus for each worker.
Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
display results.
*/
#include <stdio.h>
int main (){
    int NumEmply, BasicPay, Bonus;
    float NetPay;
    printf("Enter Number of Employees : ");
    scanf("%d",&NumEmply);
    printf("Enter Basic Salary : ");
    scanf("%d",&BasicPay);
    printf("Bonus : 12percent\n");
    NetPay= 0.12*BasicPay+BasicPay;
    printf("Salary after Bonus (Net Salary):%.2f",NetPay);
    return 0;
}