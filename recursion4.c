#include <stdio.h>    // Sum of first n natural numbers
int givesum (int n) {
    if(n == 0){
        return 0 ;
    }
    return n + givesum(n-1) ;
}
int main () {
    int num ;
    printf("Enter the number to find sum of first n natural numbers : ");
    scanf("%d",&num) ;
    int result = givesum(num) ; 
    printf("%d is the sum of first %d natural number.\n", result , num) ;
    return 0;
}