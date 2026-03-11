#include <stdio.h>
int main (){
    char ch ;
    float marks , percentage ;
    printf("Enter your marks : ");
    scanf("%f",&marks);
    printf("Enter you percentage : ");
    scanf("%f",&percentage);
    printf("Enter your grade : ");
    scanf(" %c",&ch);
    printf("Your marks : %.2f\n",marks);
    printf("Your percentage : %.2f\n",percentage);
    printf("your grades : %c",ch);
    return 0;
}
 