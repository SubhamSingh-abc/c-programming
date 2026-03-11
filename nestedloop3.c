#include <stdio.h>     //Print a 3×3 grid of numbers
int main (){
    for(int a = 1 ; a<=3 ; a+=1){
        for(int b = 1 ; b<=3 ; b+=1){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}



/*#include <stdio.h>
int main (){
    for(int a = 1 ; a<=10 ; a+=1){
        for(int b = 1 ; b<=9 ; b+=1){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/