#include <stdio.h>
int main (){
    char abc[]="Subham";                         //dont forget [] while declaring string
    char def[]={'S','i','n','g','h','\0'};       //always put characters in singler 
    printf("%s\n%s",abc,def);                    //inverted commas. ie 'a'
    return 0;                                    // btw '\0' is also a character
}



// #include<stdio.h>                     
// int main(){
//     char abc[] = "Subham";
//     char def[] = {'S','i','n','g','h','\0'};
//     printf("%s\n%s",abc,def); 
//     return 0;
// } 