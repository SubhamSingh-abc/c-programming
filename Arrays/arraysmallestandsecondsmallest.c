#include <stdio.h>
int main (){
    int num[7] , min1 , min2;
    for(int a = 0 ; a<7 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    if(num[0]<num[1]){
        min1=num[0];
        min2=num[1];
    }
    else if(num[1]<num[0]){
        min1=num[1];
        min2=num[0];
    }
    for(int a = 2 ; a<7 ; a+=1){
        if(num[a]<min1){
            min2=min1;
            min1=num[a];
        }
        else if(num[a]<min2 && num[a]!=min1){
            min2=num[a];
        }
    }
    printf("Smallest number is %d\n",min1);
    printf("Second Smallest number is %d",min2);
    return 0;
}