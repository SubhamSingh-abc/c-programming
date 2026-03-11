#include<stdio.h>       //sum of rows and columns and total
int main (){
    int matrix[2][3];
    int row = 2 , col = 3 , totalsum=0;
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element of [%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        int rowsum=0;
        for(int j = 0 ; j<col ; j+=1){
            rowsum+=matrix[i][j];
        }
        printf("Sum of row %d is equal to %d\n",i,rowsum);
    }
    for(int j = 0 ; j<col ; j+=1){
         int colsum=0;
        for(int i = 0 ; i<row ; i+=1){
            colsum+=matrix[i][j];
        }
        printf("Sum of colomn %d is equal to %d\n",j,colsum);
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            totalsum+=matrix[i][j];
        }
    }
    printf("\nSum of all element of matrix is equal to %d\n",totalsum);
    return 0;
}