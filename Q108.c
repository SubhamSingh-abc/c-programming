/*Q108. A machine learning model multiplies matrices for neural network layers.Implement a solution to
multiply two matrices of order m×n and p×q (if valid)*/
#include <stdio.h>
int main (){
    int r1 , r2 , c1 , c2 ;
    printf("Enter number of rows you want in matrix A : ");
    scanf("%d",&r1);
    printf("Enter number of columns you want in matrix A : ");
    scanf("%d",&c1);
    printf("Enter number of rows you want in matrix B : ");
    scanf("%d",&r2);
    printf("Enter number of columns you want in matrix B : ");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("Matrix multiplication not possible");      
    }
    else{
         int matA[r1][c1] , matB[r2][c2] , matC[r1][c2];
    for(int i = 0 ; i<r1 ; i+=1){
        for(int j = 0 ; j<c1 ; j+=1){
            printf("Enter element [%d][%d] of matrix A : ",i,j);
            scanf("%d",&matA[i][j]);
        }
    }
    for(int i = 0 ; i<r2 ; i+=1){
        for(int j = 0 ; j<c2 ; j+=1){
            printf("Enter element [%d][%d] of matrix B : ",i,j);    //a00 a01 a02        //a01
            scanf("%d",&matB[i][j]);                                                     //a11
        }                                                                                //a21
    }
    for(int i = 0 ; i<r2 ; i+=1){
        for(int j = 0 ; j<c2 ; j+=1){
            matC[i][j]=0;
        }
    }
    for(int i = 0 ; i<r2 ; i+=1){
        for(int j = 0 ; j<c2 ; j+=1){
            for(int k = 0 ; k<c1 ; k+=1){
                matC[i][j]+=matA[i][k]*matB[k][j];
            }
        }
    }
    printf("Matrix formed after matrix multiplication : \n");
    for(int i = 0 ; i<r1 ; i+=1){
        for(int j = 0 ; j<c2 ; j+=1){
            printf("%d\t",matC[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}