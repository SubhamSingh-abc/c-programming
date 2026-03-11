#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","r");
    if(fp==NULL){
        printf("An error occured while opening this file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    int ch ;
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    printf("\nFile read successfully.\n");
    if(feof(fp)){
        printf("End of file reached.\n");
    }
    if(ferror(fp)){
        printf("Error occured while reading this file.\n");
    }
    printf("\nFile closed successfully.\n");
    fclose(fp);
    return 0;
}