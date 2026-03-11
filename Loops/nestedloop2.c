#include <stdio.h>      //Print a 4×5 rectangle
int main (){
    for(int a = 1 ; a<=4 ; a+=1){
        for(int b = 1 ; b<=5 ; b+=1){
            printf("*",b);
        }
        printf("\n");
    }
    return 0;
}