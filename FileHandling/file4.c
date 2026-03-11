#include <stdio.h>       //file should exists already
int main () {
    FILE *fp = fopen("file+.txt","r+");
    if(fp==NULL){
        printf("File does not exists.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is being written using read plus(r+) mode.\n");
    printf("Changes has been made successfully using (r+) mode.\n");
    fclose(fp);
    return 0;
}