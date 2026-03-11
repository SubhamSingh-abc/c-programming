#include <stdio.h>
int main () {
    FILE *fp = fopen("file.txt","a");
    if(fp == NULL){
        printf("File could not be opened.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is written using append(a) mode.\n");
    fclose(fp);
    return 0;
}