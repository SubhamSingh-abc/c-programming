#include <stdio.h>
int main (){
    int num[5] , visited[5]={0} , dup , count=0 ;
    for(int a = 0 ; a<5 ; a+=1){
        printf("Enter number %d : ",a+1);
        scanf("%d",&num[a]);
    }
    for(int a = 0 ; a<5 ; a+=1){
        if(visited[a]==1){
            continue;
        }
        else{
            dup = 0 ;
            for(int j = a + 1 ; j<5 ; j+=1){
                if(num[a]==num[j]){
                    visited[j]=1;
                    dup=1;
                }
            }
        }
        if(dup==1){
            count++;
        }
    }
    printf("Number of distinct numbers having duplicates : %d",count);
    return 0;
}