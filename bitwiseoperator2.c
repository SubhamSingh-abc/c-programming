#include <stdio.h>            // bitwise OR ie | 
int main (){                  // converts bit into 1 if any of the corresponding 
    int a = 101 ;             // binary is 1
    int b = 100 ;
    int result ;
    result = a | b ;
    printf("%d\n",result);
    return 0;
}