#include <stdio.h>
#include <string.h>                           //lower to upper string
int main (){
    char abc[100];
    printf("Enter string to covert lower to upper case : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    for(int i = 0 ; abc[i]!='\0' ; i+=1){
        if(abc[i]>='a' && abc[i]<='z'){
            abc[i]=abc[i]-32;
        }
    }
    printf("String in all upper case : %s",abc);
    return 0;
}