/* FORMULAE : rand() % (max - min + 1) + min*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(0));
    int r = rand() % 100 + 1;
    printf("%d\n",r);
    return 0;
}