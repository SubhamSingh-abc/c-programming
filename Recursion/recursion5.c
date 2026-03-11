#include <stdio.h>
int powerfn (int x , int n){
    if(n == 0){
        return 1;
    }
    return x * powerfn (x , n-1) ;
}
int main () {
    int base ; 
    printf("Enter the base : ");
    scanf("%d",&base);
    int power ;
    printf("Enter the power : ");
    scanf("%d",&power);
    int result = powerfn (base,power) ;
    printf("Value of number with base %d and power %d is %d.\n",base,power,result);
    return 0;
}