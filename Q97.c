// A database standardization system stores all names in uppercase. 
//Implement a solution to display a string in uppercase.
#include <stdio.h>
#include <string.h>
int main (){
    char txt[100] ;
    printf("Enter text : ");
    fgets(txt , sizeof(txt) , stdin);
    txt[strcspn(txt,"\n")]='\0';
    for(int i = 0 ; txt[i]!='\0' ; i+=1){
        if(txt[i]>='a' && txt[i]<='z'){
            txt[i]=txt[i]-32;
        }
    }
    printf("Your text (in upper case) : %s",txt);
    return 0;
}