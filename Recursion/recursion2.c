#include <stdio.h>
void printnum (int n) {         // OUTPUT : 1 2 3 4 5 
    if(n == 0){  
        return;
    }
    printnum(n-1);
    printf("%d ",n);
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

// Case 2: Print after recursion
// void printnum(int n) {
//     if (n == 0) return;
//     printnum(n - 1);
//     printf("%d ", n);      // runs AFTER resume
// }
// Output for n=3: 1 2 3