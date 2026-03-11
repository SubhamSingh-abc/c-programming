//taking inputs in 2d array matrix
#include <stdio.h>
int main (){
    int matrix[2][3];
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("Enter element [%d][%d] of the matrix : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix is as follows :\n");
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}









/*#include<stdio.h>                     
int main (){
    int mat[2][3];
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("Enter element [%d][%d] of the matrix : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix is as follows : \n");
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/