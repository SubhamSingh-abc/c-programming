#include <stdio.h>
int main () {
    FILE *fp = fopen("bfile2.bin","wb");
    if(fp==NULL){
        printf("Error occured while opening the file.\n");
        return 1;
    }
    int arr[5] = {12,23,34,45,56} ;
    printf("File opened successfully.\n");
    fwrite(arr , sizeof(arr) , 1 , fp);
    printf("File closed successfully.\n");
    fclose(fp);
    return 0;
}