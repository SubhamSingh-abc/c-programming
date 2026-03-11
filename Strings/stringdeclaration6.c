// Array of Strings (2D Character Array)
#include <stdio.h>

int main() {
    char arr[3][10] = {"Hello", "World", "C"}; // 3 strings, each max 9 chars + '\0'

    for(int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

/*
Explanation:
- 2D array: arr[i] is a string (char array).
- Each row has fixed size, so strings must fit within that size.
- Memory allocated on stack.
*/