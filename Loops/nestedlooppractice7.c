#include <stdio.h>
int main (){
    int n = 8 ;
    for(int a = n ; a>=1 ; a--){
        for(int b = a ; b>=1 ; b--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
