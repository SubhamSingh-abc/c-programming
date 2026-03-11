#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(0));
    int r = rand();
    printf("%d\n",r);
    return 0;
}


/*srand(unsigned int seed)
Seeds the random number generator with a starting value.
Usually, we use time as a seed so numbers appear different each run*/