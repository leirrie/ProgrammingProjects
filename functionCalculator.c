#include <stdio.h>
#include <stdlib.h>


// Online exercise on basic function calculator
// To be submitted to sir Darwin Desamparado
// Made by: Riel Vincent Cabardo



float calculator(float num1, float num2, char operator); // Function prototype for calculator


int main() { // Main function

    // Variables for user input and calculation
    float number1, number2, result;
    char operator;
    char continueChoice = 'y';


    // Loop to allow multiple calculations
    while (continueChoice == 'y' || continueChoice == 'Y') {
        system("cls");
        printf("+=======================================+\n");
        printf("|         BASIC FUNCTION CALCULATOR     |\n");
        printf("+=======================================+\n");
        printf("                                        \n");
        printf("  Enter first number: ");
        scanf("%f", &number1); // Input first number
        printf("  Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator); // Input operator
        printf("  Enter second number: ");
        scanf("%f", &number2); // Input second number
        printf("                                        \n");
        printf("+=======================================+\n");

        result = calculator(number1, number2, operator); // Call the calculator function

        if (operator == '/' && number2 == 0) {
            printf("Error: Division by zero is not allowed!\n"); // Handle division by zero
        } else {
            printf("Result: %.2f %c %.2f = %.2f\n", number1, operator, number2, result); // Display the result
        }

        printf("Do you want to perform another calculation? (y/n): "); // Prompt to continue
        scanf(" %c", &continueChoice);
    }

    system("cls"); // Clear screen before exit
    printf("Thank you for using the calculator. Goodbye!\n"); // Exit message
    return 0; // End of main function
}

// Function to perform basic arithmetic operations
float calculator(float num1, float num2, char operator) {

    float result = 0.0; // variable to store the result

    switch (operator) { // determine the operation based on the operator
        case '+':
            result = num1 + num2; // addition
            break; 
        case '-':
            result = num1 - num2; // subtraction
            break;
        case '*':
            result = num1 * num2; // multiplication
            break;
        case '/':
            result = num1 / num2; // division
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 0;
    }
    return result; // return the computed result
}