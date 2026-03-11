//A data processing system classifies even and odd inputs separately. Implement a solution to store 5
//elements in an array, compute sum of all even and sum of all odd numbers
#include <stdio.h>
int main (){
    int num[5];
    int sum1 = 0 ;
    int sum2 = 0 ;
    for(int i = 0 ; i<5 ; i+=1){
    printf("Enter number %d : ",i+1);
    scanf("%d",&num[i]);
    }
    for(int i = 0 ; i<5 ; i+=1){
        if(num[i]%2==0){
            sum1+=num[i];
        }
       if(num[i]%2!=0){
        sum2+=num[i];
       } 
    }
    printf("Sum of even number is %d\n",sum1);
    printf("Sum of odd number is %d",sum2);
    return 0;
}