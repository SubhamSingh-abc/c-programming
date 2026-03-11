#include <stdio.h>
int main () {
    FILE *fp = fopen("file.txt","r+");
    if(fp==NULL){
        printf("File does not exists.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is being written using readplus(r+) mode\n");
    fclose(fp);
    return 0;
}