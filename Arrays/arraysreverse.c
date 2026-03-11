#include <stdio.h>
int main (){
    int num[5];
    for(int a = 0 ; a<5 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    printf("Numbers in reverse order : ");
    for(int a = 4 ; a>=0 ; a--){
        printf("%d ",num[a]);
    }
    return 0;
}