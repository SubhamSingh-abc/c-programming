#include <stdio.h>            // setting a bit at kth position 
void printbinaryform (int n){
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d",(n >> i) & 1) ;
    }
    printf("\n");
}
int main () {
    int k ;
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter bit position to set : ");
    scanf("%d",&k);
    printf("Bits before set : ");
    printbinaryform(num);
    int result = num | (1 << k) ;
    printf("Bits  after set : ");
    printbinaryform(result);
    return 0;
}