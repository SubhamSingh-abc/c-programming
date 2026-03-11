#include <stdio.h>
#define VALUE 1000
int main () {
    printf("%d is value of variable named VALUE\n",VALUE);
    #undef VALUE
    #define VALUE 5000
    printf("%d is new value of variable named VALUE\n",VALUE);
    #undef VALUE
    return 0;
}