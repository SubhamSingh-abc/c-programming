#include <stdio.h>
#define DEBUG
int main () {
    #ifdef DEBUG
    printf("Debug mode ON\n");
    #endif
    printf("Program running successfully.\n");
    #undef DEBUG
    return 0;
}