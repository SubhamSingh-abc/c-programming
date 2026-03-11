#include <stdio.h>
int main () {
    FILE *fp = fopen("bfile1.bin","wb");
    if(fp==NULL){
        printf("Error occured while opening this file.\n");
        return 1;
    }
    int num = 100 ;
    printf("File opened successfully.\n");
    fwrite(&num , sizeof(num) , 1 , fp);
    fclose(fp);
    return 0;
}