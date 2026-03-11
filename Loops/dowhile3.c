#include <stdio.h> //Print the multiplication table of a number entered by the user (e.g., 5 × 1 … 5 × 10).
int main (){
    int a = 1 ;
    int product;
    do{
        product=a*5;
        printf("5x%d=%d\n",a,product);
        a+=1;  
    }
    while(a<=10);
    return 0;
}