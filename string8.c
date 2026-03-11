#include <stdio.h>                           //strchr
#include <string.h>                           
int main (){
    char abc[100] , def ;
    printf("Enter string 1 : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter the character you want to find from string : ");
    scanf(" %c",&def);
    char *first = strchr(abc,def);     
    char *last = strrchr(abc,def);  
    if(first){
        printf("First occurence of %c in the string is at the position %ld\n",def,first-abc);
    }
    else{
        printf("no occurence found");
    }
    if(last){
        printf("Last occurence of %c in the string is at the position %ld",def,last-abc);
    }
    return 0;
}





// #include<stdio.h>                     //finding char in string
// #include<string.h>                    //strchr
// int main (){
//     char abc[100];
//     char d;
//     printf("Enter first statement : ");
//     fgets(abc , sizeof(abc) , stdin);
//     abc[strcspn(abc,"\n")]='\0';
//     printf("Enter the character to find : ");
//     scanf(" %c",&d);
//     char *first=strchr(abc,d);
//     char *last= strrchr(abc,d);
//     if(first){
//         printf("First occurence of %c is at : %ld\n",d, first - abc);
//     }
//     else{
//         printf("No occurence found");
//     }
//     if(last){
//         printf("Last occurence of %c is at : %ld",d,last-abc);
//     }
//     return 0;
// }