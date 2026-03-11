#include <stdio.h>                     //strcpy
#include <string.h>
int main (){
    char abc[100];
    char def[100];
    printf("Enter your statement : ");
    fgets(abc , sizeof(abc) , stdin);
    strcpy(def,abc);
    printf("Copied statement is as follows : %s",def);
    return 0;
}
 


/*#include<stdio.h>             //copying string
#include<string.h>
int main (){
    char abc[100];
    char def[100];
    printf("Enter the statement : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    strcpy(def,abc);
    printf("Copied statement is : %s ",def);
    return 0;
}*/