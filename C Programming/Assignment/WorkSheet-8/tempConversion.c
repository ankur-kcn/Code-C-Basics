#include <stdio.h>

float toFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

float toCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

float toKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    int choice;
    float input, result;

    printf("=====Temperature Conversion Menu=====\n");
    printf("1. Celsius --> Fahrenheit\n");
    printf("2. Fahrenheit --> Celsius\n");
    printf("3. Celsius --> Kelvin\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &input);
            result = toFahrenheit(input);
            printf("Fahrenheit = %.2f°F\n", result);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &input);
            result = toCelsius(input);
            printf("Celsius = %.2f°C\n", result);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &input);
            result = toKelvin(input);
            printf("Kelvin = %.2fK\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
