/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is leap
or non-leap.
*/
#include <stdio.h>
int main(){
    int a;
    printf("Enter year : ");
    scanf("%d",&a);
    if(a%4==0){
        printf("This is leap year");
    }
    else {
        printf("This year is not leap year");
    }
}