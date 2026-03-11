#include<stdio.h>                  //occurence of string
#include<string.h>
int main (){
    char abc[100];
    char d;
    printf("Enter string : ");
    fgets(abc , sizeof(abc) , stdin);
    abc[strcspn(abc,"\n")]='\0';
    printf("Enter the character to search from string : ");
    scanf(" %c",&d);
    char *first = strchr(abc,d);
    char *last = strrchr(abc,d);
    if(first){
        printf("Occurence of character %c for the first time from index : %ld",d,first-abc);
    }
    else{
        printf("No occurence found");
    }
    if(last){
        printf("Occurence of character %c for the last time from index : %ld",d,last-abc);
    }
    return 0;
}