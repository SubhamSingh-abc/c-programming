#include <stdio.h>
void printbinaryform (int n){
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d",(n >> i) & 1);
    }
    printf("\n");
}   
int main () {
    int k ;
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Before toggle : ");
    printbinaryform(num);
    printf("Enter the position which you want to toggle : ");
    scanf("%d",&k);
    num = num ^ (1 << k) ;
    printf("After toggle :  ");
    printbinaryform(num);
}