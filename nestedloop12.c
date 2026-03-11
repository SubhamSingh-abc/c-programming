#include <stdio.h>
int main (){
    int n = 9 ;
    for(int a = n ; a>=1 ; a--){
        for(int b = 1 ; b<=a ; b++){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}