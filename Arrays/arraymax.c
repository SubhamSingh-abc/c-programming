#include <stdio.h>
int main (){
    int max;
    int num[5];
    for(int i = 0 ; i<5 ; i+=1){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]); 
    }
    max=num[0];
    for(int i = 1 ; i<5 ; i+=1){
        if(num[i]>max){
            max=num[i];
        }
    }
    printf("largest number : %d",max);
    return 0;
}