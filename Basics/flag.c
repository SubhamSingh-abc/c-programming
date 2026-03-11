#include <stdio.h>
int main (){
    int n , flag=0 , b ;
    printf("Enter number till you want counting : ");
    scanf("%d",&n);
    printf("Enter the number you want to find : ");
    scanf("%d",&b);
    for(int a = 0 ; a<=n ; a+=1){
        if(a==b){
            flag=1;
        }
    }
    if(flag==1){
        printf("Number %d is located",b); 
    }
    else{
        printf("Number %d is not located",b);
    }
    return 0;
}


/*#include <stdio.h>
int main() {
    int arr[5];
    int flag = 0;

    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0)
            flag = 1;  // found a negative number
    }
    if(flag == 1)
        printf("Array contains negative numbers.\n");
    else
        printf("All numbers are positive.\n");
    return 0;
}*/