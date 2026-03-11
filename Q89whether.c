// A weather monitoring app records 30-day temperature logs. Implement a solution to store daily
// temperatures in an array and display the minimum temperature for the month
#include <stdio.h>
int main (){
    int temp[30] , min = 0;
    for(int a = 0 ; a<30 ; a+=1){
        printf("Enter temperature of Day %d : ",a+1);
        scanf("%d",&temp[a]);
    }
    min=temp[0];
    for(int a = 0 ; a<30 ; a+=1){
        if(temp[a]<min){
            min=temp[a];
        }
    }
    printf("Minimum temperature of this month is %d",min);
    return 0;
}