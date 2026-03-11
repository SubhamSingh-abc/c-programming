// A chatbot greets the user personally. 
//Implement a solution to display a name with a “Hello” message
#include <stdio.h>
#include <string.h>
int main (){
    char name[100];
    printf("Enter your name : ");
    fgets(name , sizeof(name) , stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Hello %s !!",name);
    return 0;
}