// A supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in
// an array and display the maximum price
#include <stdio.h>
int main (){
    int price[10];
    int n = 10 , max = 0 ;
    for(int a = 0 ; a<n ; a+=1){
        printf("Enter price of item %d : ",a+1);
        scanf("%d",&price[a]);
    }
    max=price[0];
    for(int a = 0 ; a<n ; a+=1){
        if(price[a]>max){
            max=price[a];
        }
    }
    printf("Highest price is %d",max);
    return 0;
}

/*#include <stdio.h>
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
}*/