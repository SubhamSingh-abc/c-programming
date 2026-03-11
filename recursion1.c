#include <stdio.h>
void printnum (int n) {          // OUTPUT : 5 4 3 2 1 
    if(n == 0){
        return;
    }
    printf("%d ",n);
    printnum(n-1);
}
int main () {
    printnum(5);
    return 0;
}

// RECURSION EXECUTION NOTE (VERY IMPORTANT):

// 1. When a function calls itself, the current function PAUSES.
// 2. The function resumes only AFTER the recursive call returns.
// 3. Code BEFORE the recursive call runs while going DOWN (before pause).
// 4. Code AFTER the recursive call runs while coming BACK UP (after resume).

// Example:

// Case 1: Print before recursion
// void printnum(int n) {
//     if (n == 0) return;
//     printf("%d ", n);      // runs BEFORE pause
//     printnum(n - 1);
// }
// Output for n=3: 3 2 1