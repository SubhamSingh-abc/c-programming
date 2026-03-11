#include <stdio.h>            // swtiching off the specific bit
void printbinaryform (int n){
    for(int i = 31 ; i >= 0 ; i--){
        printf("%d",(n >> i) & 1) ;
    }
    printf("\n");
}
int main () {
    int k ;
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Before operation : ");
    printbinaryform(num);
    printf("Enter the bit position which u want to off : ");
    scanf("%d",&k);
    printf("After operation :  ");
    int result = num &~(1 << k);
    printbinaryform(result);
    return 0;
}