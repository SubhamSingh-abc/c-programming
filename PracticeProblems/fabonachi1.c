#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;  // next term = sum of previous two terms
        t1 = t2;             // move t2 to t1
        t2 = nextTerm;       // move nextTerm to t2
    }

    return 0;
}
