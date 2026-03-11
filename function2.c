#include <stdio.h>              // argument , return 
int function (int a , int b){
    return a+b ;
}
int main (void){
    int result = function(4,5);
    printf("%d",result);
    return 0;
}