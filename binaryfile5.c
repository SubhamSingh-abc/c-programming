#include <stdio.h>
int main (){
    int arr[5] ;
    FILE *fp = fopen("bfile2.bin","rb");
    if(fp==NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fread(&arr , sizeof(arr) , 1 , fp);
    for(int i = 0 ; i<5 ; i+=1){
        printf("%d\t",arr[i]);
    }
    fclose(fp);
    return 0;
}