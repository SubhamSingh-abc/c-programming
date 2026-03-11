 //A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
//check the triangle type based on its sides.
#include <stdio.h>
int main (){
    int a , b , c ;
    printf("Enter length of first side : ");
    scanf("%d",&a);
    printf("Enter length of second side : ");
    scanf("%d",&b);
    printf("Enter length of third side : ");
    scanf("%d",&c);
    if(a==b && a==c && b==a && b==c && c==a && c==b){
        printf("Triangle is equilateral");
    }
    else if(a==b){
        printf("Triangle is isosceles");
    }
     else if(a==c){
        printf("Triangle is isosceles");
    }
    else if(b==a){
        printf("Triangle is isosceles");
    }
      else if(b==c){
        printf("Triangle is isosceles");
    }
    else if(c==a){
        printf("Triangle is isosceles");
    }
    else if(c==b){
        printf("Triangle is isosceles");
    }
    else{
        printf("Triangle is scalene");
    }
    return 0;
} 