/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute
the area of a circle.
*/
#include <stdio.h>
int main (){
    float r , area;
    printf("enter radius : ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("area of fountain %.3f",area);
    return 0;
}