#include <stdio.h>
#define ABSOLUTE_ZERO 273.15
#define KELVIN 'K'
#define CELSIUS 'C'
#define FAHRENHEIT 'F'

float toCel(char from, float value)
{
    if (from == KELVIN)
        return value - ABSOLUTE_ZERO;
    if (from == FAHRENHEIT)
        return (value - 32) / 1.8;
    return 0;
}

float toKel(char from, float value)
{
    if (from == CELSIUS)
        return value + ABSOLUTE_ZERO;
    if (from == FAHRENHEIT)
        return toKel(CELSIUS, toCel(FAHRENHEIT, value));
    return 0;
}

float toFar(char from, float value)
{
    if (from == CELSIUS)
        return (value * 1.8) + 32;
    if (from == KELVIN)
        return toFar(CELSIUS, toCel(KELVIN, value));
    return 0;
}

int main(int argc, const char * argv[]) {
    char scale;
    float value;
    printf("Input Conversion Values\n");
    printf("C - Celsius\n");
    printf("F - Fahrenheit\n");
    printf("K - Kelvin\n");
    scale = getchar();
    printf("Input Temp Value\n");
    scanf("%f", &value);
    switch (scale) {
        case KELVIN:
        {
            printf("Celsius degrease: %f\n", toCel(KELVIN, value));
            printf("Fahrenheit degrease: %f\n", toFar(KELVIN, value));
            break;
        }
        case CELSIUS:
        {
            printf("Kelvin degrease: %f\n", toKel(CELSIUS, value));
            printf("Fahrenheit degrease: %f\n", toFar(CELSIUS, value));
            break;
        }
        case FAHRENHEIT:
        {
            printf("Celsius degrease : %f\n", toCel(FAHRENHEIT, value));
            printf("Kelvin degrease: %f\n", toKel(FAHRENHEIT, value));
            break;
        }
        default:
        {
            printf("Error.Try again\n");
            break;
        }
    }
    return 0;
}
