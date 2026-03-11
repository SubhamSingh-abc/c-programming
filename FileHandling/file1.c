#include <stdio.h>
int main () {
    FILE *fp = fopen("file.txt","r");
    if(fp == NULL){
        printf("File does not exists.\n");
        return 1;
    }
    printf("File opened successfully in r mode.\n");
    fclose(fp) ;
    return 0;
}