// Character Array with Explicit Size
#include <stdio.h>

int main() {
    char str[6] = "Hello";  // Array of 6 chars (5 for letters + 1 for '\0')
    
    printf("%s\n", str);     // Prints: Hello
    printf("Size of str: %lu\n", sizeof(str)); // 6 bytes

    return 0;
}

/*
Explanation:
- str is an array of characters with a fixed size.
- String literals automatically include the null terminator '\0'.
- You cannot store a string longer than the declared size.
- Memory is allocated on the stack.
*/