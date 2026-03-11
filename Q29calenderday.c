/*A calendar app assigns a day name when the user enters a number between 1 and 7. Implement a 
solution to display the corresponding day of the week
*/
#include <stdio.h>
int main (){
    int a ;
    printf("Enter day number (ex Sunday=1,Monday=2) : ");
    scanf("%d",&a);
    if(a==1){
        printf("Sunday");
    }
    if(a==2){
        printf("Monday");
    }
        if(a==3){
        printf("Tuesday");
        }
        if(a==4){
        printf("Wednesday");
        }
        if(a==5){
        printf("Thursday");
        }
        if(a==6){
        printf("Friday");
        }
        if(a==7){
        printf("Saturday");
        }
    return 0;
}