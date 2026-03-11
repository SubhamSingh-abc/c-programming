#include <stdio.h>
#include <math.h>
int main (){
    int num , digit , original ;
    int sum = 0 ;
    printf("Enter the number for which you want to check armstrong number : ");
    scanf("%d",&num);
    original = num ;
    while(original>0){
        digit = original%10 ;
        sum+=pow(digit,6);
        original/=10;
    }
    if(sum==num){
        printf("This is armstrong number");
    }
    else{
        printf("This is not armstrong number");
    }
    return 0;
}