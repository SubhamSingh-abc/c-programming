#include <stdio.h>
int main (){
    int num , original , digit ;
    int rev = 0;
    printf("Enter the number to check whether its pelindrome or not : ");
    scanf("%d",&num);
    original = num ;
    while(num>0){
    digit=num % 10 ;
    rev=rev*10+digit;
    num/=10;
    }
    if(rev==original){
        printf("The given element is pelindrome");
    }
    else{
        printf("The given element is not pelindrome");
    }
    return 0;
}