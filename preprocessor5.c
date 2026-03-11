#include <stdio.h>
int main () {
    #ifdef DEBUG
    printf("Debug mode ON\n");
    #endif DEBUG
    printf("Program ran successfully.\n");
    return 0;
}