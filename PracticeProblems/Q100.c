/*A social media app appends hashtags to user captions. 
Implement a solution to add one string to the end of another*/
#include <stdio.h>
#include <string.h>
int main (){
    char caption[100] , tag[100] ;
    printf("Enter caption : ");
    fgets(caption , sizeof(caption) , stdin);
    caption[strcspn(caption,"\n")]='\0';
    printf("Enter tag :  ");
    fgets(tag , sizeof(tag) , stdin);
    tag[strcspn(tag,"\n")]='\0';
    strcat(caption,tag);         //strcat(caption, " "); can use this for space
    printf("%s\n",caption);
    return 0;
}