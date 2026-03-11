#include <stdio.h>
void printbinary (int n){
    for(int i = 31 ; i>=0 ; i--){
        printf("%d",(n >> i) & 1) ;
    }
    printf("\n");
}
int main () {
    int num ;
    printf("Enter the number to add 1 : ");
    scanf("%d",&num) ;
    printf("Before addition : ");
    printbinary(num);
    printf("After addition :  ");
    num = num + 1 ;  
    printbinary(num);
    return 0;
}



/*Binary rule for adding 1
When you add 1 to a binary number:
Flip trailing 1s to 0 until you hit a 0;
that 0 becomes 1; stop.
That’s it. That’s the entire rule.

Example 1: 00001100 + 1
00001100
+       1
---------
00001101

Last bit is 0
Just becomes 1
No carry further

Example 2: 00001111 + 1
00001111
+       1
---------
00010000

Step-by-step:
Rightmost 1 → becomes 0, carry
Next 1 → becomes 0, carry
Next 1 → becomes 0, carry
Next 1 → becomes 0, carry
First 0 → becomes 1, stop
This is exactly why subtraction flips bits the way it does.*/