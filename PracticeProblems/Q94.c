/*A digital noticeboard flashes announcements multiple times. 
Implement a solution to display a name 5 times.*/
#include <stdio.h>
#include <string.h>
int main (){
    char name[100];
    printf("Enter name : ");
    fgets(name , sizeof(name) , stdin);
    name[strcspn(name,"\n")]='\0';
    for(int i = 0 ; i<5 ; i+=1){
        printf("%s\n",name);
    }
    return 0;
}