#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float base, float exp);
float modulus(int a, int b);
void displayMenu();

int main() {
    int choice;
    float num1, num2, result;
    int int1, int2;

    printf("=== Simple Calculator Program ===\n");

    while (1) {
        displayMenu();
        printf("Enter your choice (1-6), or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = power(num1, num2);
                printf("Result: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;

            case 6:
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                if (int2 == 0) {
                    printf("Error: Modulus by zero!\n");
                } else {
                    result = modulus(int1, int2);
                    printf("Result: %d %% %d = %.0f\n", int1, int2, result);
                }
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float power(float base, float exp) {
    return pow(base, exp);
}

float modulus(int a, int b) {
    return a % b;
}

void displayMenu() {
    printf("\nSelect an operation to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (^)\n");
    printf("6. Modulus (%%)\n");
}
