/* A calculator app provides options to compute square, square root, or cube. Implement a solution to 
operate based on the user’s choice.
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a , Number , result ;
    printf("Select operation by chosing number\n1.square\n2.square root\n3.cube\nEnter your choice: ");
    scanf("%f",&a);
    if(a==1){
        printf("Enter the number you want to find square of : ");
        scanf("%f",&Number);
        result = Number*Number;
        printf("your result : %.2f",result);
    } 
    else if (a==2){
        printf("Enter the number you want to find the square root of : ");
        scanf("%f",&Number);
        result = sqrt(Number);
        printf("your result : %.2f",result);
    }
    else if(a==3){
        printf("Enter the number you want to find cube of : ");
        scanf("%f",&Number);
        result = Number*Number*Number;
        printf("your result : %.2f",result);
    }
    return 0;
}