#include <stdio.h>
int main (){
    int num ;
    FILE *fp = fopen("bfile1.bin","rb");
    if(fp==NULL){
        printf("Failed to open file !.\n");
        return 1;
    }
    printf("File opened successfully.\n");
    fread(&num , sizeof(num) , 1 , fp);
    printf("Data stored in binary file : %d\n",num);
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}