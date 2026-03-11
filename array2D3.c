#include <stdio.h>
int main (){
    int mat[2][3] , trans[3][2] , row=2 , col=3 ;
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            printf("Enter element [%d][%d] of the matrix : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0 ; i<row ; i+=1){
        for(int j = 0 ; j<col ; j+=1){
            trans[j][i]=mat[i][j];
        }
    }
    printf("Transpose of matrix is as follows :\n");
    for(int i = 0 ; i<col ; i+=1){
        for(int j = 0 ; j<row ; j+=1){
            printf("%d ",trans[i][j]);
        }
        printf("\n");
        }
    return 0;
}