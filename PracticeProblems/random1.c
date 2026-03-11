#include <stdio.h>
#include <stdlib.h>
int main () {
    int r = rand();
    printf("%d\n",r);
    return 0;
}


/*rand() : 
Generates a pseudo-random integer between 0 and RAND_MAX.
RAND_MAX is usually a very large constant, like 32767.*/