#include <stdio.h>
int main (){
    FILE *fp = fopen("file2+.txt","w");
    if(fp==NULL){
        printf("File could not be opened.\n");
        return 1;
    }
    printf("File opened successfully in write mode.\n");
    fputc('A',fp);
    fputc('\n',fp);
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}