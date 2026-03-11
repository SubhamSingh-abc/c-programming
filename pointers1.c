// Basic Pointer: Address and Value of a Variable
#include <stdio.h>

int main() {
    int a = 1000;       // Normal integer variable
    int *p = &a;        // Pointer variable storing the address of a

    printf("%d is value of a.\n", a);            // 1000
    printf("%d is value where pointer p is pointing (*p).\n", *p); // 1000
    printf("%p is address of a (&a).\n", (void*)&a);               // Address of a
    printf("%p is value stored in pointer p (same as &a).\n", (void*)p); // Address stored in p
    printf("%p is address of pointer p (&p).\n", (void*)&p);       // Address of pointer variable p itself

    return 0;
}

/*
Explanation:
- a stores the integer 1000.
- p stores the address of a (&a).
- *p dereferences the pointer, giving the value stored at the address p points to (1000).
- &a gives the memory address of a.
- p stores the same address as &a because it points to a.
- &p gives the memory address of the pointer variable itself.
*/
