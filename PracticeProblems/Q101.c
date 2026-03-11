// A login system verifies password input by comparing strings.
// Implement a solution to compare two strings.
#include <stdio.h>
#include <string.h>
int main (){
    char passw[100] , vrpassw[100];
    printf("Enter your password for encrypting: ");
    fgets(passw , sizeof(passw) , stdin);
    passw[strcspn(passw,"\n")]='\0';
    printf("Enter your password for verification : "); 
    fgets(vrpassw , sizeof(vrpassw) , stdin);
    vrpassw[strcspn(vrpassw,"\n")]='\0';
    int result = strcmp(passw,vrpassw);
    if(result==0){
        printf("Access granted.\n");
    }
    else{
        printf("Access denied , try again.\n");
    }
    return 0;
}