#include <stdio.h>                    //built in string
#include <string.h>                   //strrev()
int main (){
    char abc[100];
    printf("Enter string : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    strrev(abc);
    printf("String after reverse is as follows : %s",abc);
    return 0;
}




// #include<stdio.h>                   //built in reverse
// #include<string.h>
// int main (){
//     char str[100];
//     printf("Enter your string : ");
//     fgets(str , sizeof(str) , stdin);
//     str[strcspn(str,"\n")]='\0';
//     strrev(str);
//     printf("String after reverse : %s",str);
//     return 0;
// }