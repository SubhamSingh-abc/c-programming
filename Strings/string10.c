#include <stdio.h>
#include <string.h>
int main (){
    char abc[100] , def[50] ;
    printf("Enter string : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter the substring to find : ");
    fgets(def , sizeof(def) , stdin);
    def[strcspn(def,"\n")]='\0';
    char *found = strstr(abc,def);
    if(found){  
        printf("The position of substring (%s) is at %ld",def,found-abc);
    }
    else{
        printf("Substring not found");
    }
    return 0;
}






// #include<stdio.h>                     //substring
// #include<string.h>                    //strstr
// int main (){
//     char str[100];
//     char sub[50];
//     printf("Enter the string : ");
//     fgets(str , sizeof(str) , stdin);
//     str[strcspn(str,"\n")]='\0';
//     printf("Enter the substring : ");
//     fgets(sub , sizeof(sub) , stdin);
//     sub[strcspn(sub,"\n")]='\0';
//     char *found = strstr(str,sub);
//     if(found){
//         printf("Substring (%s) found : %ld",sub,found-str);
//     }
//     else{
//         printf("Substring not found");
//     }
//     return 0;
// }