#include <stdio.h>       // bitwise NOT operator ie ~ 
int main (){             // flips the bit , 0 ---> 1 and 1 ---> 0
    int a  = 111;
    int result ;    
    result = ~a ;
    printf("%d",result);
    return 0;
}