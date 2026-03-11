/*A file system duplicates filenames before editing. 
Implement a solution to copy a string into another*/
#include <stdio.h>
#include <string.h>
int main (){
    char filename[100] , duplicatefilename[100];
    printf("Enter file name : ");
    fgets(filename , sizeof(filename) , stdin);
    filename[strcspn(filename,"\n")]='\0';
    strcpy(duplicatefilename,filename);
    printf("Copied file name is %s\n",duplicatefilename);
    return 0;
}