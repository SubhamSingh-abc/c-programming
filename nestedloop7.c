#include <stdio.h>
int main (){
    int n = 9 ;
    for(int a = 1 ; a<=n ; a+=1){
        for(int b = 1 ; b<=a ; b+=1){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0; 
}