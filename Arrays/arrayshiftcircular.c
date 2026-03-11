#include <stdio.h>
int main (){
    int num[5];
    int temp;
    for(int a = 0 ; a<5 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    temp = num[4];
    for(int a = 4 ; a>0 ; a-=1){
        num[a]=num[a-1];
    }
    num[0] = temp ;
    printf("Number after circular shift : ");
    for(int a = 0 ; a<5 ; a+=1){
        printf("%d ",num[a]);
    }
    return 0;
}