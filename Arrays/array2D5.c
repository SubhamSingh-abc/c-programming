#include<stdio.h>                 //subtraction of matrix
int main (){
    int x[2][2] , y[2][2] , z[2][2] , row=2 , col=2;
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element [%d][%d] of the matrix X : ",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element [%d][%d] of the matrix Y : ",i,j);
            scanf("%d",&y[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            z[i][j]=x[i][j]-y[i][j];
        }
    }
    printf("Subtraction of the matrix X and Y is as follows :\n");
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}