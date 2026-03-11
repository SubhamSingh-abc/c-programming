/* An admission portal decides eligibility based on marks in three subjects. Implement a solution to 
classify the student into a Degree, Diploma, or Certificate course.
*/
#include <stdio.h>
#include <math.h>
int main (){
    float a , b , c , avg , sum ;
    printf("Enter marks of first subject : ");
    scanf("%f",&a);
    printf("Enter marks of second subject : ");
    scanf("%f",&b);
    printf("Enter marks of third subject : ");
    scanf("%f",&c);
    sum = a + b + c ;
    avg = sum / 3 ;
    if(avg<33){
        printf("Not eligible for any course");
    }
    if(avg>=33 && avg<60){
        printf("Eligible for certificate course");
    }
    if(avg>=60 && avg<=75){
        printf("Eligible for diploma course");
    }
    if(avg>75){
        printf("Eligible for degree course");
    }
    return 0;
} 
