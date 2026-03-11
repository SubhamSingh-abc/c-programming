/* A geometry teaching tool computes circle properties depending on student’s choice.
Implement a solution to calculate area, circumference, or diameter of a circle
*/
#include <stdio.h>
#include <math.h>
int main (){
    int a ; 
    float result , radius , circumference , diameter , area ;
    printf("Select the operation you want to perform by entering number\n1.area\n2.circumference\n3.diameter\nSelect operation : ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter radius : ");
        scanf("%f",&radius);
        area = 3.14*radius*radius;
        printf("Area of circle is : %.2f",area); 
    }
    else if(a==2){
        printf("Enter radius : ");
        scanf("%f",&radius);
        circumference = 2*3.14*radius;
        printf("circumference of circle is : %.2f",circumference); 
    }
    else if(a==3){
        printf("Enter radius : ");
        scanf("%f",&radius);
        diameter = radius*2;
        printf("diameter of circle is : %.2f",diameter); 
    }
    return 0;
}