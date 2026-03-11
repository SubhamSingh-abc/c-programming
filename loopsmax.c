#include <stdio.h>
int main (){
    int max = 0, n , num;
    printf("Enter how many numbers you want to compare : ");
    scanf("%d",&n);
    for(int a = 1 ; a<=n ; a+=1){
        printf("Enter number %d : ",a);
        scanf("%d",&num);
        if(num>max){
            max=num;
        }  
    }
    printf("Largest number is %d",max);
    return 0;
}