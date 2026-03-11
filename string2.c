#include <stdio.h>         //fgets
int main (){
    char abc[100];
    printf("Enter your statement : ");
    fgets(abc , sizeof(abc) , stdin);
    printf("Your entered statement : %s",abc);
    return 0;
}



// #include<stdio.h>
// int main (){
//     char abc[100];
//     printf("Enter your sentence : ");
//     fgets(abc , sizeof(abc) , stdin);
//     printf("Your sentence is : %s",abc);
//     return 0;
// }