#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius (°C): ");
        scanf("%f", &celsius);

        fahrenheit = (celsius * 9/5) + 32;
        printf("Temperature in Fahrenheit = %.2f °F\n", fahrenheit);
    }
    else if(choice == 2) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit (°F): ");
        scanf("%f", &fahrenheit);

        celsius = (fahrenheit - 32) * 5/9;
        printf("Temperature in Celsius = %.2f °C\n", celsius);
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
