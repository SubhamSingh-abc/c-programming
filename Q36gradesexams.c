/* An online exam system computes grades based on percentage. Implement a solution to accept
percentage and assign Grade ‘A’ if ≥75 else Grade ‘B’ using conditional operator.
*/
#include <stdio.h>
int main (){
    float a ;
    printf("Enter your percentage : ");
    scanf("%f",&a);
    if(a>=75.00){
        printf("Your grade is A");
    }
    else{
        printf("Your grade is B");
    }
    return 0;
}
