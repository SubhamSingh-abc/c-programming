#include <stdio.h>
int main (){
    for(int a = 1 ; a<=10 ; a+=1){
        if(a==5){
            break;
        }
        printf("%d\n",a);
    }
    return 0;
}