#include <stdio.h>                 //matrix addition 2D array
int main (){
    int a[3][3] , b[3][3] , sum[3][3] , row=3 , col=3 ;
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element [%d][%d] of the matrix A : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element [%d][%d] of the matrix B : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Value of matrix C is as follows :\n");
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}