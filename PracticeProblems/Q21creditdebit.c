/*A bank statement marks a transaction as credit (+), debit (–), or neutral (0).
Implement a solution to classify a number as positive, negative, or zero.
*/
#include <stdio.h>
int main (){
    float a ;
    printf("Enter number : ");
    scanf("%f",&a);
    if(a>0){
        printf("amount credited is %.2f",a);
    }
    else if(a<0){
        printf("amount debited is %.2f",a);
    }    
    else{
        printf("amount is neutral");
        
    }
     return 0;
}