// Pointer to a Character Array (Modifiable)
#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;        // Pointer points to first character of array

    p[0] = 'J';           // Modifiable, changes array content
    printf("%s\n", str);  // Prints: Jello
    for(int i = 0 ; i < 6 ; i+=1){
        printf("%p ",str[i]);
    }
    return 0;
}

/*
Explanation:
- Unlike a string literal, character array can be modified.
- Pointer p can be used to traverse or modify the array.
*/