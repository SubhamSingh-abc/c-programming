#include <stdio.h>
#include <math.h>
int main(){
    float amount , principle , CompoundInt ;
    printf("Enter Amount : ");
    scanf("%f",&amount);
    printf("Enter Principle : ");
    scanf("%f",&principle);
    CompoundInt = amount - principle;
    printf("Compound interest : %f",CompoundInt);
    return 0;
}