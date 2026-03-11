/*A teacher wants to find the average marks of three students to decide class performance. Implement a
solution to accept three numbers and compute their average.
*/
#include <stdio.h>
int main(){
    float marks1 , marks2 , marks3, total;
    printf("marks of first student :");
    scanf("%f",&marks1);
    printf("marks of second student :");
    scanf("%f",&marks2);
    printf("marks of third student :");
    scanf("%f",&marks3);
    total = marks1+marks2+marks3;
    printf("average marks : %.2f",total/3.0);
    return 0;
}