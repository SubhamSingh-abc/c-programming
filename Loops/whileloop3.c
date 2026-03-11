#include <stdio.h>
int main (){
    int n ;
    int sum = 0 ;
    int a = 1 ;
    printf("Enter the number till you want to find the sum : ");
    scanf("%d",&n);
    while(a<=n){
        sum = sum + a;
        a+=1;
    }
    printf("%d\n",sum);
    return 0;
}