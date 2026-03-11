#include <stdio.h>
#include <math.h>
int main (){
    int num , digit , original ;
    int sum = 0 ;
    printf("Enter the number for which you want to verify armstong number : ");
    scanf("%d",&num);
    original=num;
    while(num>0){
        digit=num%10;
        sum+=pow(digit,5);
        num=num/10;
    }
    if(sum==original){
        printf("The given number is armstrong number");
    }
    else{
        printf("The given number is not armstrong number");
    }
}