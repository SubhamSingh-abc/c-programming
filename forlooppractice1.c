#include <stdio.h>
int main (){
    int n ;
    int sum = 0 ;
    printf("Enter the natural number till you want sum : ");
    scanf("%d",&n);
    for(int a = 0 ; a<=n ; a+=1){
        sum = sum + a ;
    }
    printf("SUM of first n natural number : %d",sum);
    return 0;
}