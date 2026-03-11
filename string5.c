#include <stdio.h>            //strcat
#include <string.h>          
int main (){
    char abc[100];
    char def[100];
    printf("Enter statement 1 : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter statement 2 : ");
    fgets(def , sizeof(def) , stdin);
    strcat(abc,def);
    def[strcspn(def,"\n")]='\0';
    printf("New statement is as follows : %s",abc);
    return 0;
}




/*#include<stdio.h>           //concatenation of strings.
#include<string.h>
int main (){
    char abc[100];
    char def[100];
    printf("Enter first statement : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter second statement : ");
    fgets(def , sizeof(def) , stdin);
    def[strcspn(def,"\n")]='\0';
    strcat(abc,def);
    printf("Statement after concatenation : %s",def);
    return 0;
}*/