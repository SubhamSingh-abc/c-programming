#include <stdio.h>
int main() {
    int a = 0;
    do {
        a++;
        if (a == 5) {
            continue; // skip printing when a = 5
        }
        printf("%d\n", a);
    } while (a < 10);
    return 0;
}
