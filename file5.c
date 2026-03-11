#include <stdio.h>       //file if created if no file was there and previous data
int main () {            // is erased.
    FILE *fp = fopen("file1+.txt","w+");
    if(fp==NULL){
        printf("File could not opened.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is been written using write plus (w+) mode.\n");
    printf("Changes have been successfully made using write plus (w+) mode.\n");
    fclose(fp);
    return 0;
}