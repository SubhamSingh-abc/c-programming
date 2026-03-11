/*An architect checks if three given angles can form a valid triangle. Implement a solution to accept three 
angles and verify if the triangle is valid.
*/
#include <stdio.h>
int main (){
    int a , b , c ;
    printf("Enter angle 1 : ");
    scanf("%d",&a);
    printf("Enter angle 2 : ");
    scanf("%d",&b);
    printf("Enter angle 3 : ");
    scanf("%d",&c);
    if(a+b+c==180){
        printf("triangle is valid ");
    }
    else {
        printf("triangle is not valid ");
    }
    return 0;
}