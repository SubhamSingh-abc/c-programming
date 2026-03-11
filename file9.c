#include <stdio.h>
int main (){
    FILE *pf = fopen("file4+.txt","w");
    if(pf==NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fprintf(pf,"GOOGLE , microsoft , Amazon\n");
    fclose(pf);
    printf("File closed successfully.\n");
    return 0;
}