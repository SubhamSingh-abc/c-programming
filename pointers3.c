// Printing Addresses of All Elements of an Array (Using Pointer Arithmetic)
#include <stdio.h>

int main() {
    int arr[6] = {12, 23, 34, 45, 56, 67};
    int *p = arr;   // Pointer pointing to the first element of the array

    for(int i = 0; i < 6; i++) {
        printf("%p ", (void*)(p + i)); // Address of each element using pointer arithmetic
    }

    return 0;
}

/*
Explanation:
- p+i moves the pointer to the i-th element of the array.
- (p+i) gives the address of the i-th element.
- Shows how pointer arithmetic works with arrays.
*/