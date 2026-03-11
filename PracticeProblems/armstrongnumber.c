#include <stdio.h>
#include <math.h>
int main(){
    int num, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num > 0) {
        digit = num % 10;              // get last digit
        sum += pow(digit, 3);          // cube it and add to sum
        num = num / 10;                // remove last digit
    }
    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
