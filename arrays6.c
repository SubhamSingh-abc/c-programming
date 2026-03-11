#include <stdio.h>
int main (){
    char abc[4] = {'A' , 'C' , 'D' , 'E'};
    for(int i = 0 ; i<=3 ; i+=1){
        printf("%c\n",abc[i]);
    }
    return 0;
}