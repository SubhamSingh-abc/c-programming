#include <stdio.h>                          // Print the product of first n natural numbers.
int main (){
    int n ;
    int product = 1 ;
    printf("Enter the number till you want sum : ");
    scanf("%d",&n);
    for(int a = 1 ; a<=n ; a+=1){
        product = product * a ;
    }
    printf("%d",product);
    return 0;
}     
  