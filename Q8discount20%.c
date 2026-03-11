/* A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
 Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount*/
#include <stdio.h>
int main (){
 #include <math.h>   
    int itemNum , Quantity;
    float unitprice, total ,Bill ;
    printf("Enter item number : ");
    scanf("%d",&itemNum);
    printf("Enter Quantity : ");
    scanf("%d",&Quantity);
    printf("Enter Unit Price : ");
    scanf("%f",&unitprice);
    total= Quantity*unitprice;
    Bill = total-20*total/100;
    printf("Item Number: %d\nQuantity : %d\n",itemNum,Quantity);
    printf("Total : %f\n",total);
    printf("Your Bill after discount : %.2f",Bill);
    return 0;
}
