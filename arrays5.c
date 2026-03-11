#include <stdio.h>
int main (){
    float abc[7] = { 10.00 , 34.867 , 98.99 , 33.33 , 67.79 , 45.55 , 555.55};
    for( int i = 0 ; i<=6 ; i+=1){
        printf("%.3f\n",abc[i]);
    }
    return 0;
}