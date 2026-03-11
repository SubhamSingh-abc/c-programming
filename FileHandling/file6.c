#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","a+");
    if(fp==NULL){
        printf("File could not be opened.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(fp,"This is being written using append plus (a+) mode.\n");
    printf("Changes have been made using append plus (a+) mode.\n");
    fclose(fp);
    return 0;
}