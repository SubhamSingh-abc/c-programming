#include <stdio.h>         // bitwise NOT operator ie ^
int main (){               // converts bit into 1 if corresponding binary is different 
    int result ;           // and 0 if corresponding binary is same
    int a = 111;
    int b = 100;
    result = a ^ b ;
    printf("%d\n",result);
    return 0;
}