#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","r");
    if(fp==NULL){
        return 1;
    }
    int ch ;
    ch = fgetc(fp);
    printf("First character of the file is : %c\n",ch);
    fseek(fp,5,SEEK_SET);
    ch = fgetc(fp);
    printf("Sixth character of the file is : %c\n",ch);
    fseek(fp,2,SEEK_CUR);
    ch = fgetc(fp);
    printf("Two character ahead of current character of the file is : %c\n",ch);
    fseek(fp,-3,SEEK_END);
    ch = fgetc(fp);
    printf("Third last character of the file is : %c\n",ch);
    fclose(fp);
    return 0;
}