// Pointer to a String Literal (Read-Only Memory)
#include <stdio.h>

int main() {
    char *str = "Hello";  
    
    printf("%s\n", str); 
    printf("Address of str literal itself : %p\n", &str);   
    for(int i = 0 ; i < 6 ; i+=1){
        printf("Address of %d element of the string literal : %p\n",i+1,(void*)str+i);
    }
    return 0;
}