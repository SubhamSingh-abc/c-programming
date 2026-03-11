#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","r");
    if(fp==NULL){
        return 1;
    }
    int ch ;
    ch = fgetc(fp);
    printf("First character of the text is : %c\n",ch);
    long pos = ftell(fp);
    printf("Current position of the cursor is at (in bytes): %ld\n",pos);
    fclose(fp);
    return 0;
}