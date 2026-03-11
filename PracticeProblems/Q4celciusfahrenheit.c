/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to
convert Fahrenheit temperature into Centigrade*/

#include <stdio.h>
int main(){
    float fahrenheit , celcius;
    printf("Enter temperature (in fahrenheit) : "); //°C = (°F − 32) × 5⁄9
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*0.555555555;
    printf("Temperature in fahrenheit : %.2f\n",fahrenheit);
    printf("Temperature in celcius : %.2f",celcius);
    return 0;
}