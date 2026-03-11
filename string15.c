#include <stdio.h>                //manual code reverse
#include <string.h>
int main (){
    char abc[100] , rev[100] ;
    printf("Enter string : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    int len = strlen(abc);
    for(int i = 0 ; i<len ; i+=1){
        rev[i]=abc[len-1-i];
    }
    rev[len]='\0';
    printf("Reversed string : %s",rev);
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// int main (){
//     char abc[100] , rev[100] ;
//     printf("Enter string : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     int len = strlen(abc) ;
//     for(int i = 0 ; i<len ; i+=1){
//         rev[i]=abc[len-1-i];
//     }
//     rev[len]=0;
//     printf("Reversed string : %s",rev);
//     return 0;
// }