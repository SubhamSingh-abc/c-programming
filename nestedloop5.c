#include <stdio.h>
int main (){
    int n = 5 ;
    for(int a = 1 ; a<=n ; a+=1){
        for(int b = 1 ; b<=a ; b+=1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}





/*#include <stdio.h>          //Print a right-angled triangle of numbers
 int main (){
     int n = 5 ;
     for(int a = 1 ; a<=n ; a+=1){
         for(int c = 1 ; c<=a ; c+=1){
             printf("%d",c);
         }
         printf("\n");
     }
     return 0;
 }*/
