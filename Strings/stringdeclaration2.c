// Character Array without Specifying Size
#include <stdio.h>

int main() {
    char str[] = "Hello";   // Compiler counts the size automatically
    
    printf("%s\n", str);    // Prints: Hello
    printf("Size of str: %lu\n", sizeof(str)); // 6 bytes

    return 0;
}

/*
Explanation:
- Compiler automatically adds the null terminator '\0'.
- Array size is exactly enough to store the string + '\0'.
- Preferred for flexibility.
*/
