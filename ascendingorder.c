//ascending order
#include <stdio.h>
int main (){
    int a , b , c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    if(a>b && a>c) { //a is largest
        if(b>c)
        printf("%d %d %d",c,b,a);
        else{
            printf("%d %d %d",b,c,a);
        }
    }
    else if(b>a && b>c){ //b is largest
        if(a>c){
            printf("%d %d %d",c,a,b);
        }
        else{
            printf("%d %d %d",a,c,b);
        }
    }
    else{
        if(b>a){ // c is largest
            printf("%d %d %d",a,b,c);
        }
        else{
            printf("%d %d %d",b,a,c);
        }
    }
    return 0;
}