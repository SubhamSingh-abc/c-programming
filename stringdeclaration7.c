// Dynamic String (Using malloc)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char *)malloc(20 * sizeof(char)); // Allocate memory dynamically
    strcpy(str, "Hello, C!");

    printf("%s\n", str);

    free(str); // Always free dynamically allocated memory
    return 0;
}

/*
Explanation:
- Memory is allocated at runtime on the heap.
- Allows strings of variable size.
- Must manually manage memory (malloc/free).
- Useful when string size is unknown during compilation.
*/