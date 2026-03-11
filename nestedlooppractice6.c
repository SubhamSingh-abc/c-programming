#include <stdio.h>
int main (){
    int n = 8 ;
    for(int a = 1 ; a<=8 ; a+=1){
        for(int b = 1 ; b<=a ; b+=1){
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}