#include <stdio.h>
int main (){
    FILE *fp = fopen("file3+.txt","w");
    if(fp==NULL){
        printf("File could not be opened.\n");
        return 1;
    }
    printf("File opened succesfully.\n");
    fputs("SUBHAM\n",fp);
    fputs("SINGH\n",fp);
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}