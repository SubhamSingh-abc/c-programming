#include <stdio.h>
int main (){
    int a = 1 ;
    int product , n ;
    printf("Enter the number you want the table : ");
    scanf("%d",&n);
    while(a<=10){
        product=n*a;
        printf("%d x %d = %d\n",n,a,product);
        a+=1;
    }
    return 0;
}