// Pointer to a String Literal (Read-Only Memory)
#include <stdio.h>

int main() {
    char *str = "Hello";  // Pointer points to string literal
    
    printf("%s\n", str);  // Prints: Hello
    printf("Address of str: %p\n", (void*)str);  // address of first element
    printf("Address of str: %p\n", &str);   // address of string litral itself

    // str[0] = 'J';       // ERROR: modifying string literal is undefined

    return 0;
}

/*
Explanation:
- str is a pointer to a string literal stored in read-only memory.
- String literals should not be modified.
- Memory is usually in read-only data section.
- Very memory efficient for constants.
*/