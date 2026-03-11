#include <stdio.h>
int main () {
    FILE *fp = fopen("file.txt","w");
    if(fp==NULL){
        printf("File could not be opened.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is written using write(w) mode.\n");
    fclose(fp);
    return 0;
}