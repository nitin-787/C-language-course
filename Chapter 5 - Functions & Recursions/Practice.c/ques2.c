#include <stdio.h>
float temprature(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}

int main(){
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    //called function to convert celsius to fahrenheit

    fahrenheit = temprature(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}