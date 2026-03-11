#include<stdio.h>           //multiplication of matrix
int main (){
    int a[3][2] , b[2][3] , c[3][3];
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<2 ; j+=1){
            printf("Enter element [%d][%d] of the matrix A : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("Enter element [%d][%d] of the matrix B : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i = 0 ; i<2 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            c[i][j]=0;
        }
    }
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            for(int k = 0 ; k<2 ; k+=1){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i = 0 ; i<3 ; i+=1){
        for(int j = 0 ; j<3 ; j+=1){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}