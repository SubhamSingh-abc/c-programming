#include <stdio.h>
int main (){
    int factorial = 1;
    int n ;
    printf("Enter the number to get factorial : ");
    scanf("%d",&n);
    for(int a=1 ; a<=n ; a+=1){
        factorial = factorial * a ;
    }
    printf("Value of factorial : %d",factorial);
    return 0;
}