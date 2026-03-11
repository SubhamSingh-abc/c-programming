#include <stdio.h>
int main (){
    int num , original , digit ;
    int rev = 0 ;
    printf("Enter the number which you want to reverse : ");
    scanf("%d",&num);
    original = num ;
    while(original>0){
        digit = original%10;
        rev=rev*10+digit;
        original/=10;
    }
    printf("Reversed number is %d",rev);
    return 0;
}