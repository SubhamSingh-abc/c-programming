#include <stdio.h>
int main (){
    int n = 5 ;
    for(int a = 1 ; a<=n ; a+=1){
        for(int b = 1 ; b<=n-a ; b+=1){
            printf(" ");
        }
        for(int b = 1 ; b<=a ; b+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}