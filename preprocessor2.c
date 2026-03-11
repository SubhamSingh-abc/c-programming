#include <stdio.h>
#define MAX 100
int main () {
    printf("%d is max value of variable MAX",MAX);
    #undef MAX
    return 0;
}