/*A recruitment system checks which candidate scored the highest among three applicants. Implement a
solution to accept three numbers and display the largest.
*/
#include <stdio.h>
int main (){
    float a , b , c ;
    printf("Enter first candidate marks : ");
    scanf("%f",&a);
    printf("Enter second candidate marks : ");
    scanf("%f",&b);
    printf("Enter third candidate marks : ");
    scanf("%f",&c);
    if(a>b && a>c){
        printf("first candidate score is highest");
    }
    else if(b>a && b>c){
        printf("second candidate score is highest");
    }
    if(c>a && c>b){
        printf("third candidate score is highest");
    }
    return 0;
}