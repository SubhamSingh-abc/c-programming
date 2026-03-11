/*A data consistency tool checks whether a given 
string is the same forwards and backwards.
Implement a solution to check whether a string is palindrome or no*/
#include <stdio.h>
#include <string.h>
int main (){
    char str[100] , rev[100];
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(rev,str)==0){
        printf("Given string is a palindrome.\n");
    }
    else{
        printf("Given string is not a palindrome\n");
    }
    return 0;
}