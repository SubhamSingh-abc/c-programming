//A smart home controller checks if the number of devices ON is even or odd. Implement a solution to
//accept a number and determine if it is even or odd.
#include <stdio.h>
int main(){
    int a ;
    printf("Enter number of devices ON : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("even");
    }
    else {
        printf("Odd");
    }
    return 0;
}