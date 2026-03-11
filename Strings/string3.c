#include <stdio.h>
#include <string.h>
int main (){
    char abc[100];
    printf("Enter your statement : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    int len = strlen(abc);
    printf("Length of the string is %d",len);
    return 0;
}

//abc[strcspn(abc,"\n")]='\0';           V.imp


// #include<stdio.h>
// #include<string.h>
// int main (){
//     char abc[100];
//     printf("Enter your statement : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     int len = strlen(abc);  
//     printf("Lenght of string is : %d",len);
//     return 0;
// }