//A document editor counts characters in a word. 
//Implement a solution to display the length of a string
#include <stdio.h>
#include <string.h>
int main (){
    char str[100] ; 
    int len ; 
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    len = strlen(str);
    printf("Length of the string is %d",len);
    return 0;
}