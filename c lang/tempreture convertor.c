#include <stdio.h>

int main() {
    float temp, converted;
    char unit;

    printf("Enter the temperature value: ");
    scanf("%f", &temp);

    printf("Input the unit of this temperature (c for Celsius, f for Fahrenheit): ");
    scanf(" %c", &unit); 

    if (unit == 'c' || unit == 'C') {
       
        converted = (temp * 9 / 5) + 32;
        printf("The converted temperature is: %.2f F\n", converted);
    } else if (unit == 'f' || unit == 'F') {
       
        converted = (temp - 32) * 5 / 9;
        printf("The converted temperature is: %.2f C\n", converted);
    } else {
        printf("Invalid unit. Please enter 'c' or 'f'.\n");
    }

    return 0;
}