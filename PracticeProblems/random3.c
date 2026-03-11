/*Modulus operator (%) : rand() % N → gives a number from 0 to N-1.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(0));
    int r = rand() % 100;
    printf("%d\n",r);
    return 0;
}