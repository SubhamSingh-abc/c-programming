#include <stdio.h>
int main () {
    FILE *pf = fopen("file1+.txt","r");
    if(pf==NULL){
        return 1;
    }   
    int ch = fgetc(pf);
    printf("Read letter is %c\n",ch);
    fclose(pf);
    return 0;
}