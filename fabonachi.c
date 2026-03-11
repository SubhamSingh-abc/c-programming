#include <stdio.h>
int main (){
     int t1 , t2 , nextterm , i , n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Fabonachi series :");
    for(int i = 1 ; i<=n ; i+=1){
        printf("%d\n",t1);
        nextterm = t1 + t2 ;
        t1 = t2 ;
        t2 = nextterm ;
    }
    return 0;
}