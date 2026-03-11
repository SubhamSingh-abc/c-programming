#include <stdio.h>
int factorial (int n){
    if(n<0){
        return -1 ;
    }
    if(n==0){
        return 1 ;
    }
    return n * factorial(n-1);
}
int main () {
    int num ; 
    printf("Enter the number for finding its factorial : ");
    scanf("%d",&num) ;
    long long int result = factorial(num) ;
    if(result == -1){
        printf("Factorial for negative number does not exists.\n");
    }else{
        printf("%d is fact of %d.\n",result,num) ;
    }
    return 0;
}