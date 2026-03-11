#include <stdio.h>
int main () {
    if(remove("delete.txt")==0){
        printf("File deleted successfully from the disk.\n");
    }
    else{
        printf("Error occurred while deleting this file.\n");
    }
    return 0;
}