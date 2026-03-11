/* A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
solution to calculate the roots of a quadratic equation. 
*/
#include <stdio.h>
#include <math.h>
int main (){
    double a , b , c , result1 , result2 ;
    double D;
    printf("format of Quadratic equation : ax*2+bx+c = 0\nEnter value of a : ");
    scanf("%lf",&a);
    printf("Enter value of b : ");
    scanf("%lf",&b);
    printf("Enter value of c : ");
    scanf("%lf",&c);
    D=b*b-4*a*c; //x = (-b ± √(b² - 4ac)) / 2a
    result1 = (-b+sqrt(D))/(2*a);
    result2 = (-b-sqrt(D))/(2*a);
    printf("Roots of the quadratic equation are %.2lf and %.2lf",result1,result2);
    return 0;
}
