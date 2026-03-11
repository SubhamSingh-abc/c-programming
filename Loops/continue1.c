#include <stdio.h>
int main (){
    for(int a = 1 ; a<=31 ; a++){
        if(a%7==0){
            printf("Day %d : Holiday\n",a);
        continue;}
        printf("Day %d : Working day\n",a);
    }
    return 0;
}