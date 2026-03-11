#include <stdio.h>
int main (){
    for(int a = 0 ; a<=100 ; a++){
        if(a==78){
            break;
        }
        printf("%d\n",a);
    }
    return 0;
}