/*An engineering calculator evaluates the type of roots of quadratic equations. 
Implement a solution to check whether roots are: 
i) Real and Unequal 
ii) Real and Equal 
iii) Imaginary 
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a , b , c , D ;
    printf("Quadratic equation : ax*2+bx+c=0\nEnter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    D=b*b-4*a*c;
    if (D>0 && a!=0){
        printf("Roots are real and unequal");
    }
    else if (D<0 && a!=0){
        printf("Roots are imaginary");
    }
    else{
        printf("Roots are real and equal");
    }
    return 0;
}