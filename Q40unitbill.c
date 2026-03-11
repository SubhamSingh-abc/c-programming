/*A utility company computes customer bills based on units consumed. Implement a solution to accept
number of units consumed and calculate bill using given rates.
*/
#include <stdio.h>
#include <math.h>
int main (){
    float bill , unit , rate ;
    printf("Enter amount of units consumed : ");
    scanf("%f",&unit);
    printf("Enter rate of unit : ");
    scanf("%f",&rate);
    bill = unit*rate;
    printf("Your Bill : %.3f",bill);
    return 0;
}