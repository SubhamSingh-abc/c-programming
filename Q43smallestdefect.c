/*A quality check tool identifies the smallest defect dimension out of three measurements. Implement a
solution to display the smallest of three numbers.
*/
#include <stdio.h>
int main (){
    float a , b , c ;
    printf("Enter first dimension : ");
    scanf("%f",&a);
    printf("Enter second dimension : ");
    scanf("%f",&b);
    printf("Enter third dimension : ");
    scanf("%f",&c);
    if (a<b && a<c){
        printf("first dimension is smallest one");
    }
    else if (b<a && b<c){
        printf("second dimension is smallest one");
    }
    else if (c<a && c<b){
        printf("third dimension is smallest one");
    }
    
    return 0;
}