/*A manufacturing QC system checks defect codes divisible by both 3 and 5.
Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5*/
#include <stdio.h>
int main (){
    int num[5] , total1 = 0 , total2 = 0 ;
    for(int a = 0 ; a<5 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
        if(num[a]%3==0){
            num[a]=1;
            total1+=num[a];
        }
        if(num[a]%5==0){
            num[a]=1;
            total2+=num[a];
        }
    }
    printf("Elements divisible by 3 are : %d\n",total1);
    printf("Elements divisible by 5 are : %d",total2);
    return 0;
}