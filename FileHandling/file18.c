#include <stdio.h>
int main () {
    if(rename("rename.txt","rename1.txt")==0){
        printf("File renamed successfully.\n");
    }
    else{
        printf("Error occured while renaming this file.\n");
    }
    return 0;
}