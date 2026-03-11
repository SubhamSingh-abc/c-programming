#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(0));
    int a = 100;
    int b = 200;
    int r = rand() % (b-a+1)+a;
    printf("%d\n",r);
    return 0;
}