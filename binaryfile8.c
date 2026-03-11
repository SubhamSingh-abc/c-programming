#include <stdio.h>
int main (){
    FILE *fp = fopen("bfile2.bin","rb") ;
    if(fp==NULL){
        printf("Error occurred while opening this file.\n");
        return 0;
    }
    printf("File opened successfully.\n");
    int arr[100];
    int n = 0 ;
    while(fread(&arr[n] , sizeof(arr[n]) , 1 , fp)==1){
        n += 1 ;
    }
    for(int i = 0 ; i < n ; i+=1){
        printf("%d\n",arr[i]);
    }
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}