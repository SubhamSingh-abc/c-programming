#include <stdio.h>
int main(){
    int a , b;
    printf("Enter first player score : ");
    scanf("%d",&a);
    printf("Enter second player score : ");
    scanf("%d",&b);
    if(a>b){
        printf("Player First score is greater");
    }
    else {
        printf("Player second score is greater");
    }
    return 0;
} 