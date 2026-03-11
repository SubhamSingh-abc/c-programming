// Printing Address of Array Elements Using Array Name
#include <stdio.h>

int main() {
    int arr[5] = {12, 23, 34, 45, 56};

    for(int i = 0; i < 5; i++) {
        printf("%p ", (void*)&arr[i]); // Address of each array element
    }

    return 0;
}

/*
Explanation:
- &arr[i] gives the memory address of the i-th element.
- Simpler than pointer arithmetic for beginners.
- Array name can also be treated as a pointer.
*/