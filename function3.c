#include <stdio.h>        // return , no argument
int function (void){
    return 1000 ;
}
int main (void){
    int result = function();
    printf("%d\n", result);
    return 0;
}