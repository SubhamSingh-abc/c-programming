// Q107. A data analytics tool flips rows and columns for better visualization. Implement a solution to store a
// 3×3 matrix and compute its transpose.
#include <stdio.h>
int main (){
    int mat[3][3] , trans[3][3];
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("Enter element [%d][%d] of the matrix : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            trans[i][j]=mat[j][i];
        }
    }
    for(int j = 0 ; j<3 ; j+=1){
        for(int i = 0 ; i<3 ; i+=1){
           printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}