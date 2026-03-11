/* password masking system reverses input for verification without using built-in functions.
 Implement a solution to display a string in reverse order.*/
 #include <stdio.h>
 #include <string.h>
 int main (){
    char str[100] , rev[100];
    int len ;
    printf("Enter string : ");
    fgets(str , sizeof(str) , stdin);
    str[strcspn(str,"\n")]='\0';
    len = strlen(str);
    for(int i = 0 ; i<len ; i+=1){
        rev[i]=str[len-1-i];
    }
    rev[len]='\0';
    printf("String after reversing : %s\n",rev);
    return 0;
 }