/*Explicit Type Casting
This is you telling C exactly how to convert a variable.

Syntax:
(type) expression

Example:
int a = 5;
int b = 2;
float c;

c = (float)a / b; // explicitly cast 'a' to float
printf("%f\n", c); // output: 2.500000
Without (float), a / b would do integer division → result = 2.*/

#include <stdio.h>
int main () {
    int a = 5;
    float b = 2.0;
    float c = a + b;  // a is automatically converted to float
    float d = a / b ;
    printf("%f\n",c);
    printf("%f\n",d);
    return 0;
}