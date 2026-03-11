/*A civil engineer wants to check the longest side of a triangular structure using Pythagoras’ theorem.
Implement a solution to compute the hypotenuse of a right-angled triangle.
*/
#include <stdio.h>
#include <math.h>
int main (){
    float base, height , hypotneuse;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);
    hypotneuse = sqrt(base*base + height*height);
    printf("longest side of triangle :%.2f",hypotneuse);
    return 0;
}
