// Printing Addresses of Pointer Variable Itself in an Array Context (Advanced)
#include <stdio.h>

int main() {
    int arr[5] = {12, 23, 34, 45, 56};
    int *p = arr;  // Pointer pointing to first element

    for(int i = 0; i < 5; i++) {
        printf("%p ", (void*)(&p + i)); // Address of the pointer variable itself
    }

    return 0;
}

/*
Explanation:
- &p gives the address of the pointer variable p (not the array elements).
- &p + i moves in memory relative to the pointer variable itself.
- This is advanced and usually used for understanding memory layout, not common in day-to-day coding.
*/  