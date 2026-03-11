#include <stdio.h>
#include <string.h>
int main (){
    char abc[100];
    char def[100];
    printf("Enter statement 1 : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter statement 2 : ");
    fgets(def , sizeof(def) , stdin);
    def[strcspn(def,"\n")]='\0';
    int len1= strlen(abc);
    int len2= strlen(def);  
    if(len1==len2){
        printf("Both strings are equal");
    }
    else if(len1>len2){
        printf("String1 is greater than String2");
    }
    else{
        printf("String2 is greater than String1");
    }
    return 0;
}