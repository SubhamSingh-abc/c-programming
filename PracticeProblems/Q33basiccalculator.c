/*A finance calculator performs basic operations on two amounts (add, subtract, multiply, divide). 
Implement a solution to compute based on user’s choice.
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a , number1 , number2 , result ;
    printf("Enter the number to chose the operation you want to perform\n1.add\n2.subtract\n3.multiply\n4.divide\nEnter your choice : ");
    scanf("%f",&a);
    if(a==1){
        printf("Enter numbers you want to add\n");
        printf("Enter number 1 : ");
        scanf("%f",&number1);
        printf("Enter number 2 : ");
        scanf("%f",&number2);
        result = number1+number2;
        printf("your result is : %.3f",result);
    }
     else if(a==2){
        printf("Enter numbers you want to subtract\n");
        printf("Enter number 1 : ");
        scanf("%f",&number1);
        printf("Enter number 2 : ");
        scanf("%f",&number2);
        result = number1-number2;
        printf("your result is : %.3f",result);
    }
    else if(a==3){
        printf("Enter numbers you want to multiply\n");
        printf("Enter number 1 : ");
        scanf("%f",&number1);
        printf("Enter number 2 : ");
        scanf("%f",&number2);
        result = number1*number2;
        printf("your result is : %.3f",result);
    }
    else if(a==4){
        printf("Enter numbers you want to divide\n");
        printf("Enter number 1 : ");
        scanf("%f",&number1);
        printf("Enter number 2 : ");
        scanf("%f",&number2);
        result = number1/number2;
        printf("your result is : %.3f",result);
    }
    return 0;
}