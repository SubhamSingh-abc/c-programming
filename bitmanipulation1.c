#include <stdio.h>           // checking even or odd using & operator 
int main () {                // bit manipulation
    int num ;
    printf("Enter number to check whether is odd or even : ");
    scanf("%d",&num);
    if(num & 1){
        printf("%d is Odd.\n",num);
    }
    else{
        printf("%d is Even.\n",num);
    }
    return 0;
}