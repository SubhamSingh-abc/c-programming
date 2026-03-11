/* store runs offers when order size is divisible by both 3 and 5. Implement a solution to check if a
number is divisible by 3 and 5.
*/
#include <stdio.h>
int main (){
    int a;
    printf("Enter the number of order size : ");
    scanf("%d",&a);
    if(a%3==0 || a%5==0){
        printf("Offer applicable");
    }
    else {
        printf("Offer not applicable");
    }
}