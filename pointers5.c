// Printing the Values of Array Elements Using Pointer Dereferencing
#include <stdio.h>   

int main() {
    int arr[5] = {12, 23, 34, 45, 56};
    int *p = arr;  // Pointer pointing to first element

    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + i)); // Value at the i-th element
    }

    return 0;
}

/*
Explanation:
- *(p+i) dereferences the pointer to get the value of the i-th element.
- Demonstrates how pointers can access array elements directly.
*/