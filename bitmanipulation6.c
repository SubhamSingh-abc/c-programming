#include <stdio.h>
int main () {
    int n ;
    printf("Enter the integer to check power of 2 : ");
    scanf("%d",&n);
    if(n>0 && (n & (n-1)) == 0){
        printf("%d is power of 2.\n",n);
    }else{
        printf("%d is not power of 2.\n",n);
    }
    return 0;
}
  

// power of has 2 has exactly 1 bit set

/*Binary rule:
When you subtract 1 from a number:
Rightmost 1 → becomes 0
All bits to the right of it → become 1
Bits to the left → unchanged*/

/*dry run : 
n = 8
Binary: 1000
n - 1 = 7
Binary: 0111
Now AND them:

   1000
 & 0111
 ------
   0000
Result = 0*/

/*n = 12
Binary: 1100
n - 1 = 11
Binary: 1011
AND:
   1100
 & 1011
 ------
   1000*/