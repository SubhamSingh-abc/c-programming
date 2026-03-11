#include <stdio.h>
int main (){
    FILE *fp = fopen("file1+.txt","r");
    if(fp==NULL){
        return 1;
    }
    char line[100];
    while((fgets(line , sizeof(line) , fp))!=NULL){
        printf("%s",line);
    }
    fclose(fp);
    return 0;
}