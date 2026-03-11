#include <stdio.h>       // sentence[strcspn(sentence,"\n")]='\0';
#include <string.h>
int main () {
    char sentence[100];
    printf("Enter your sentence : ");
    fgets(sentence , sizeof(sentence) , stdin);
    sentence[strcspn(sentence,"\n")]='\0';
    printf("Your sentence is : %s\n",sentence);
    return 0;
}   