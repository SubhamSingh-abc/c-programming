#include <stdio.h>
int main (){
    char abc[100];
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("%s",abc);
    return 0;
}