/*Type casting in C is basically forcing a variable of one type to be treated as another type.
Think of it as telling C*/

/* 1. Implicit Type Casting (Type Conversion)

This happens automatically when C sees a type mismatch in operations.
Example:
int a = 5;
float b = 2.0;
float c = a + b; // a is automatically converted to float
Here, a is implicitly converted to float before addition.
Key point: Happens without your explicit command.*/

/*Why Type Casting Matters  
Avoids integer division problems
Allows mixing types safely
Helps in memory-sensitive operations (like char ↔ int conversions)
Critical when dealing with function return types and pointers*/

/*int + float → float (int promoted to float)
char + int → int (char promoted to int)
float + double → double (float promoted to double)*/


#include <stdio.h>
int main () {
    float a = 100.555 ;
    int b = 500 ;
    printf("%f",a+b); 
    return 0;
}