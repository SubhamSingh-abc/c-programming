/*A wholesale supplier applies 10% discount if order > 1000 items. Implement a solution to compute total
expenses and apply discount accordingly
*/
#include <stdio.h>
int main (){
    float quantity , cost , discost , bill , total ;
    printf("Enter the quantity of item : ");
    scanf("%f",&quantity);
    if(quantity>1000){
        printf("Enter cost of item : ");
        scanf("%f",&cost);
        total = quantity*cost;
        bill = total-0.1*total;
        printf("Eligible for discount\n");
        printf("Your Bill is %.2f",bill);
    }
    else{
        printf("Enter cost of item : ");
        scanf("%f",&cost);
        total = quantity*cost;
        bill = total;
        printf("Not applicable for discount\n");
        printf("Your Bill : %.2f",bill);
    return 0;
}
}