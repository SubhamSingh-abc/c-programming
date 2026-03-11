//A banker wants to calculate the amount a customer needs to pay after borrowing money. Implement a
//solution to compute Simple Interest
#include <stdio.h>
int main (){
    float principle;
    printf ("principle:");
    scanf("%f",&principle);
    float time;
    printf("time passed:");
    scanf("%f",&time);
    float rate;
    printf("rate:");
    scanf("%f",&rate);
    printf("simple interest:%f",rate*time*principle/100);
    return 0;
}
//square root code - sqrt
/*#include <stdio.h>
int main (){
    float principle;
    printf ("principle:");
    scanf("%f",&principle);
    float time;
    printf("time passed:");
    scanf("%f",&time);
    float rate;
    printf("rate:");
    scanf("%f",&rate);
    printf("simple interest:%f",rate*time*principle/100);
    return 0;
}
*/