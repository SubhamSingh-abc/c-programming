#include <stdio.h>
int main (){
    int n = 9 ;
    for(int a = n ; a>=1 ; a--){
        for(int b = a ; b>=1 ; b--){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}