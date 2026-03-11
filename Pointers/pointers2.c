// Printing Address of a Single Variable (Simpler Version)
#include <stdio.h>

int main() {
    int a = 100;
    int *p = &a;

    printf("%d is the value of a\n", a);
    printf("%p is the address of a (&a)\n", (void*)&a);

    return 0;
}

/*
Explanation:
- Shows a basic example of a pointer pointing to a single variable.
- Useful for absolute beginners.
*/
