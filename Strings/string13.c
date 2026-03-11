#include <stdio.h>                                    //string upper to lowercase
#include <string.h>
int main (){
    char abc[100];
    printf("Enter string to convert from upper cse to lower case : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    for(int i = 0 ; abc[i]!='\0' ; i+=1){
        if(abc[i]>='A' && abc[i]<'Z'){
            abc[i]=abc[i]+32;
        }
    }
    printf("String in lowercase : %s",abc);
    return 0;
}