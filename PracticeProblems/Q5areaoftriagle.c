//An engineer is designing a triangular park with one right angle. Implement a solution to compute the area
//of a right-angled triangle.
#include <stdio.h>
int main (){
    float base,height,area;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);
    area = 0.5*base*height;
    printf("area of triangle is : %.2f",area);
    return 0;
}
