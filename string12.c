#include <stdio.h>             //palindrome check
#include <string.h>
int main (){
    char abc[100];
    char def[100];
    printf("Enter string you want to check palindrome for : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    strcpy(def,abc);
    strrev(abc);
    if(strcmp(abc,def)==0){
        printf("Given string is a palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}




// #include<stdio.h>                    //palindrome of string
// #include<string.h>
// int main (){
//     char str[100];
//     char rev[100];
//     printf("Enter the string to check palindrome for : ");
//     fgets(str , sizeof(str) , stdin);
//     str[strcspn(str,"\n")]='\0';
//     strcpy(rev,str);
//     strrev(rev);
//     if(strcmp(rev,str)==0){
//         printf("Given string is a palindrome\n");
//     }
//     else{
//         printf("Given string is not a palindrome");
//     }
//     return 0;
// }