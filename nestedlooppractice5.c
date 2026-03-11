#include <stdio.h>
int main (){
    int n = 12 ;
    for(int a = 1 ; a<=n ; a+=1){
        for(int b = 1 ; b<=a ; b+=1){
            printf("%d",b);
        }
        printf("\n");
    }
}