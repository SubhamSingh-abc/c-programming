/*Q106. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 3×3
matrices and compute their sum*/
#include<stdio.h>
int main (){
    int mat[3][3] , sum = 0 ;
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("Enter element [%d][%d] of the matrix : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            sum+=mat[i][j];
        }
    }
    printf("Sum of all the elements of the matrix is %d",sum);
    return 0;
}