#include <stdio.h>
#include <stdlib.h>

// Global variables
int unitChoice = 0;
float numberToMeasure = 0.0;

// Function prototypes
float measurementResult(int unitChoice, float numberToMeasure);
void measurementOptionsTable();
void measurementUnit(int unitChoice);

// Main function
int main() {
    // Display options and get user choice
    measurementOptionsTable();
    printf("Enter the number that corresponds to your choice: ");
    scanf("%d", &unitChoice);
    
    // Clear screen (works on Windows)
    system("cls");

    // Get the measurement value from user
    measurementUnit(unitChoice);
    scanf("%f", &numberToMeasure);

    // Calculate and display result
    float result = measurementResult(unitChoice, numberToMeasure);
    if (result != -1) {
        printf("The result is %.6f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

float measurementResult(int unitChoice, float numberToMeasure) {
    float total;

    switch (unitChoice) {
        case 1: // CM TO KM
            total = numberToMeasure / 100000.0;  // Fixed: divide
            return total;
        case 2: // M TO KM
            total = numberToMeasure / 1000.0;    // Fixed: divide
            return total;
        case 3: // MM TO CM
            total = numberToMeasure / 10.0;      // Fixed: divide
            return total;
        case 4: // CM TO M
            total = numberToMeasure / 100.0;     // Fixed: divide
            return total;
        case 5: // NM TO M
            total = numberToMeasure / 1000000000.0;  // Fixed: divide
            return total;
        case 6: // Liters to mL
            total = numberToMeasure * 1000.0;    // Correct: multiply
            return total;
        case 7: // Gallon to Liter
            total = numberToMeasure * 3.78541;   // Fixed
            return total;
        case 8: // Quarts to Liter
            total = numberToMeasure * 0.946353;  // Fixed
            return total;
        case 9: // Cubic m to cubic cm
            total = numberToMeasure * 1000000.0; // Correct: multiply
            return total;
        case 10: // Tablespoon to liter
            total = numberToMeasure * 0.0147868; // Fixed
            return total;
        default:
            return -1; // Invalid choice indicator
    }
}

void measurementUnit(int unitChoice) {
    switch(unitChoice) {
        case 1:
            printf("Centimeter to Kilometer is selected!\n\nEnter number (cm): ");
            break;
        case 2:
            printf("Meter to Kilometer is selected!\n\nEnter number (m): ");
            break;
        case 3:
            printf("Millimeter to Centimeter is selected!\n\nEnter number (mm): ");
            break;
        case 4:
            printf("Centimeter to Meter is selected!\n\nEnter number (cm): ");
            break;
        case 5:
            printf("Nanometer to Meter is selected!\n\nEnter number (nm): ");
            break;
        case 6:
            printf("Liters to Milliliter is selected!\n\nEnter number (L): ");
            break;
        case 7: 
            printf("Gallon to Liters is selected!\n\nEnter number (Gallon): ");
            break;
        case 8:
            printf("Quarts to Liters is selected!\n\nEnter number (qt): ");
            break;
        case 9:
            printf("Cubic m to Cubic cm is selected!\n\nEnter number (Cubic m): ");
            break;
        case 10:
            printf("Tablespoon to Liter is selected!\n\nEnter number (Tbsp): ");
            break;
        default:
            printf("Invalid choice! Please run the program again.\n");
            break;
    }
}

void measurementOptionsTable() {
    // Conversion option table
    printf("For length: \n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "| 1. Centimeter to Kilometer | 2. Meter to Kilometer    | 3. Millimeter to Centimeter | 4. Centimeter to Meter | 5. Nanometer to Meter  |\n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "For volume: \n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "| 6. Liters to Milliliters   | 7. Gallon to Liters      | 8. Quarts to Liters         | 9. Cubic m to Cubic cm | 10. Tablespoon to Liter|\n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n");
}