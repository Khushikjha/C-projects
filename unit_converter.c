#include <stdio.h>

// Function to convert meters to centimeters
float metersToCentimeters(float meters) {
    return meters * 100;
}

// Function to convert centimeters to meters
float centimetersToMeters(float centimeters) {
    return centimeters / 100;
}

// Function to convert meters to inches
float metersToInches(float meters) {
    return meters * 39.37;
}

// Function to convert inches to meters
float inchesToMeters(float inches) {
    return inches / 39.37;
}

int main() {
    int choice;
    float value;

    printf("Unit Converter - Length\n");
    printf("1. Meters to Centimeters\n");
    printf("2. Centimeters to Meters\n");
    printf("3. Meters to Inches\n");
    printf("4. Inches to Meters\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            printf("%.2f meters = %.2f centimeters\n", value, metersToCentimeters(value));
            break;
        case 2:
            printf("%.2f centimeters = %.2f meters\n", value, centimetersToMeters(value));
            break;
        case 3:
            printf("%.2f meters = %.2f inches\n", value, metersToInches(value));
            break;
        case 4:
            printf("%.2f inches = %.2f meters\n", value, inchesToMeters(value));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
