#include <stdio.h>
int main (){
    int n ;
    int sum = 0 ; 
    printf("Enter the number till you want sum : ");
    scanf("%d",&n);
    for(int a = 0 ; a<=n ; a+=1){
        sum = sum + a ; 
    }
    printf("%d",sum);
    return 0;
}