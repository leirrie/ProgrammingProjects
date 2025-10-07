#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global variables for measurement converter
int unitChoice = 0;
float numberToMeasure = 0.0;

// Function prototypes for measurement converter
float measurementResult(int unitChoice, float numberToMeasure);
void measurementOptionsTable();
void measurementUnit(int unitChoice);

// Function prototypes for individual programs
void runFoodcartInventory();
void runMeasurementConverter();
void runMenu();
void runMultipleChoiceExam();

int main() {
    int mainChoice;
    char continueChoice = 'y';

    while (continueChoice == 'y' || continueChoice == 'Y') {
        system("cls");
        
        printf("+==============================================================================+\n");
        printf("|                        COMBINED C PROGRAMS MENU                              |\n");
        printf("+==============================================================================+\n");
        printf("|                                                                              |\n");
        printf("|  1. Foodcart Inventory Management System                                    |\n");
        printf("|  2. Measurement Converter                                                   |\n");
        printf("|  3. Foodcart Menu & Ordering System                                         |\n");
        printf("|  4. C Programming Multiple Choice Exam                                      |\n");
        printf("|  5. Exit                                                                    |\n");
        printf("|                                                                              |\n");
        printf("+==============================================================================+\n");
        printf("\nEnter your choice: ");
        scanf("%d", &mainChoice);
        getchar();

        switch (mainChoice) {
            case 1:
                runFoodcartInventory();
                break;
            case 2:
                runMeasurementConverter();
                break;
            case 3:
                runMenu();
                break;
            case 4:
                runMultipleChoiceExam();
                break;
            case 5:
                continueChoice = 'n';
                break;
            default:
                printf("Invalid choice! Press any key to continue...");
                getchar();
        }

        if (mainChoice >= 1 && mainChoice <= 4) {
            printf("\n\nWould you like to run another program? (Y/N): ");
            scanf(" %c", &continueChoice);
            getchar();
        }
    }

    system("cls");
    printf("+==============================================================================+\n");
    printf("|                          THANK YOU FOR USING!                                |\n");
    printf("|                   Made by: Riel, Glen, Loel, and Nico                       |\n");
    printf("+==============================================================================+\n");

    return 0;
}

// FOODCART INVENTORY PROGRAM
void runFoodcartInventory() {
    float cokeCapital = 10, cokeSPrice = 15, cokeProfit = (cokeSPrice - cokeCapital),
          bwaterCapital = 9, bwaterSPrice = 15, bwaterProfit = (bwaterSPrice - bwaterCapital),
          stingCapital = 13, stingSPrice = 20, stingProfit = (stingSPrice - stingCapital),
          yakultCapital = 10, yakultSPrice = 15, yakultProfit = (yakultSPrice - yakultCapital),
          gatoradeCapital = 35, gatoradeSPrice = 45, gatoradeProfit = (gatoradeSPrice - gatoradeCapital),
          oishiCapital = 9, oishiSPrice = 12, oishiProfit = (oishiSPrice - oishiCapital),
          laysCapital = 20, laysSPrice = 25, laysProfit = (laysSPrice - laysCapital),
          fishdaCapital = 9, fishdaSPrice = 12, fishdaProfit = (fishdaSPrice - fishdaCapital),
          oRingsCapital = 9, oRingsSPrice = 12, oRingsProfit = (oRingsSPrice - oRingsCapital),
          cjellyCapital = 18, cjellySPrice = 25, cjellyProfit = (cjellySPrice - cjellyCapital);

    int cokeQuantity = 20, bwaterQuantity = 20, stingQuantity = 20, yakultQuantity = 20,
        gatoradeQuantity = 20, oishiQuantity = 20, laysQuantity = 20, fishdaQuantity = 20,
        oRingsQuantity = 20, cjellyQuantity = 20;

    int userChoice = 0, updateStocksChoice = 0;
    char loopOn = 'y';
    char border[] = "--------------------------------------------------------------------------------------------------------";

    do {
        system("cls");

        printf("+-------------------------------------------------------------------------------+\n"
               "| ___   __    _  __   __  _______  __    _  _______  _______  ______    __   __ |\n"
               "||   | |  |  | ||  | |  ||       ||  |  | ||       ||       ||    _ |  |  | |  ||\n"
               "||   | |   |_| ||  |_|  ||    ___||   |_| ||_     _||   _   ||   | ||  |  |_|  ||\n"
               "||   | |       ||       ||   |___ |       |  |   |  |  | |  ||   |_||_ |       ||\n"
               "||   | |  _    ||       ||    ___||  _    |  |   |  |  |_|  ||    __  ||_     _||\n"
               "||   | | | |   | |     | |   |___ | | |   |  |   |  |       ||   |  | |  |   |  |\n"
               "||___| |_|  |__|  |___|  |_______||_|  |__|  |___|  |_______||___|  |_|  |___|  |\n"
               "+-------------------------------------------------------------------------------+\n"
               "What would you like to do? \n\n"
               "1. See the current inventory\n"
               "2. Update the stocks in the inventory\n"
               "3. Exit\n"
               "Enter choice: ");

        scanf("%1d", &userChoice);

        switch (userChoice) {
            case 1:
                system("cls");
                printf("+%54s+\n"
                       "|%20s|%20s|%20s|%20s|%20s|\n"
                       "+%54s+\n", border, "Product Name ", "Quantity ", "Initial Price ", "Selling Price ", "Profit ", border);

                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Coke", cokeQuantity, cokeCapital, cokeSPrice, cokeProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Bottled Water", bwaterQuantity, bwaterCapital, bwaterSPrice, bwaterProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Sting", stingQuantity, stingCapital, stingSPrice, stingProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Yakult", yakultQuantity, yakultCapital, yakultSPrice, yakultProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Gatorade", gatoradeQuantity, gatoradeCapital, gatoradeSPrice, gatoradeProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Oishi", oishiQuantity, oishiCapital, oishiSPrice, oishiProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Lays", laysQuantity, laysCapital, laysSPrice, laysProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Fishda", fishdaQuantity, fishdaCapital, fishdaSPrice, fishdaProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Onion Rings", oRingsQuantity, oRingsCapital, oRingsSPrice, oRingsProfit);
                printf("|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Coffee Jelly", cjellyQuantity, cjellyCapital, cjellySPrice, cjellyProfit);
                printf("+%54s+\n", border);

                printf("Press enter to return to main menu...");
                getchar();
                getchar();
                break;

            case 2:
                system("cls");
                getchar();
                printf("Which product would you like to update?\n"
                       "1. Coke\n2. Bottled Water\n3. Sting\n4. Yakult\n5. Gatorade\n"
                       "6. Oishi\n7. Lays\n8. Fishda\n9. Onion Rings\n10. Coffee Jelly\n"
                       "Enter choice: ");
                scanf("%d", &updateStocksChoice);

                switch (updateStocksChoice) {
                    case 1:
                        printf("Enter new quantity for Coke: ");
                        scanf("%d", &cokeQuantity);
                        printf("The updated quantity of Coke is %d\n", cokeQuantity);
                        break;
                    case 2:
                        printf("Enter new quantity for Bottled Water: ");
                        scanf("%d", &bwaterQuantity);
                        printf("The updated quantity of Bottled Water is %d\n", bwaterQuantity);
                        break;
                    case 3:
                        printf("Enter new quantity for Sting: ");
                        scanf("%d", &stingQuantity);
                        printf("The updated quantity of Sting is %d\n", stingQuantity);
                        break;
                    case 4:
                        printf("Enter new quantity for Yakult: ");
                        scanf("%d", &yakultQuantity);
                        printf("The updated quantity of Yakult is %d\n", yakultQuantity);
                        break;
                    case 5:
                        printf("Enter new quantity for Gatorade: ");
                        scanf("%d", &gatoradeQuantity);
                        printf("The updated quantity of Gatorade is %d\n", gatoradeQuantity);
                        break;
                    case 6:
                        printf("Enter new quantity for Oishi: ");
                        scanf("%d", &oishiQuantity);
                        printf("The updated quantity of Oishi is %d\n", oishiQuantity);
                        break;
                    case 7:
                        printf("Enter new quantity for Lays: ");
                        scanf("%d", &laysQuantity);
                        printf("The updated quantity of Lays is %d\n", laysQuantity);
                        break;
                    case 8:
                        printf("Enter new quantity for Fishda: ");
                        scanf("%d", &fishdaQuantity);
                        printf("The updated quantity of Fishda is %d\n", fishdaQuantity);
                        break;
                    case 9:
                        printf("Enter new quantity for Onion Rings: ");
                        scanf("%d", &oRingsQuantity);
                        printf("The updated quantity of Onion Rings is %d\n", oRingsQuantity);
                        break;
                    case 10:
                        printf("Enter new quantity for Coffee Jelly: ");
                        scanf("%d", &cjellyQuantity);
                        printf("The updated quantity of Coffee Jelly is %d\n", cjellyQuantity);
                        break;
                    default:
                        printf("Invalid product ID!\n");
                }

                printf("You have successfully updated the inventory!\nPress enter to return...");
                getchar();
                getchar();
                break;

            case 3:
                loopOn = 'n';
                break;

            default:
                printf("Invalid Input!");
                getchar();
        }

    } while (loopOn == 'y' || loopOn == 'Y');
}

// MEASUREMENT CONVERTER PROGRAM
void runMeasurementConverter() {
    system("cls");
    measurementOptionsTable();
    printf("Enter the number that corresponds to your choice: ");
    scanf("%d", &unitChoice);

    system("cls");
    measurementUnit(unitChoice);
    scanf("%f", &numberToMeasure);

    float result = measurementResult(unitChoice, numberToMeasure);
    if (result != -1) {
        printf("The result is %.6f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    printf("Press enter to continue...");
    getchar();
    getchar();
}

float measurementResult(int unitChoice, float numberToMeasure) {
    float total;

    switch (unitChoice) {
        case 1:
            total = numberToMeasure / 100000.0;
            return total;
        case 2:
            total = numberToMeasure / 1000.0;
            return total;
        case 3:
            total = numberToMeasure / 10.0;
            return total;
        case 4:
            total = numberToMeasure / 100.0;
            return total;
        case 5:
            total = numberToMeasure / 1000000000.0;
            return total;
        case 6:
            total = numberToMeasure * 1000.0;
            return total;
        case 7:
            total = numberToMeasure * 3.78541;
            return total;
        case 8:
            total = numberToMeasure * 0.946353;
            return total;
        case 9:
            total = numberToMeasure * 1000000.0;
            return total;
        case 10:
            total = numberToMeasure * 0.0147868;
            return total;
        default:
            return -1;
    }
}

void measurementUnit(int unitChoice) {
    switch (unitChoice) {
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
    printf("For length: \n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "| 1. Centimeter to Kilometer | 2. Meter to Kilometer    | 3. Millimeter to Centimeter | 4. Centimeter to Meter | 5. Nanometer to Meter  |\n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "For volume: \n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n"
           "| 6. Liters to Milliliters   | 7. Gallon to Liters      | 8. Quarts to Liters         | 9. Cubic m to Cubic cm | 10. Tablespoon to Liter|\n"
           "+---------------------------------------------------------------------------------------------------------------------------------------+\n");
}

// MENU PROGRAM
void runMenu() {
    float chocoMilktea = 49, taroMilktea = 49, wmelonMilktea = 49, cookiesMilktea = 49,
          americanoCoffee = 49, macchiatoCoffee = 49, matchaCoffee = 49, jellyCoffee = 49,
          cheesyFries = 20, siomai = 20, tempura = 5, fishball = 1,
          bottledWater = 15, coke = 20, sting = 20, yakult = 15,
          oishi = 10, lays = 20, fishda = 10, onionRings = 10;

    float totalCost = 0, moneyOnHand = 0, change = 0;
    int userOrder, quantity = 0;
    char userChoice;

    system("cls");
    printf("+-------------------------------------------------------------------------+\n"
           "| _______  _______  ___   _______             ____   _______              |\n"
           "||  _    ||       ||   | |       |           |    | |   _   |             |\n"
           "|| |_|   ||  _____||   | |_     _|   ____     |   | |  |_|  |             |\n"
           "||       || |_____ |   |   |   |    |____|    |   | |       |             |\n"
           "||  _   | |_____  ||   |   |   |              |   | |       |             |\n"
           "|| |_|   | _____| ||   |   |   |              |   | |   _   |             |\n"
           "||_______||_______||___|   |___|              |___| |__| |__|             |\n"
           "| _______  _______  _______  ______   _______  _______  ______    _______ |\n"
           "||       ||       ||       ||      | |       ||   _   ||    _ |  |       ||\n"
           "||    ___||   _   ||   _   ||  _    ||       ||  |_|  ||   | ||  |_     _||\n"
           "||   |___ |  | |  ||  | |  || | |   ||       ||       ||   |_||_   |   |  |\n"
           "||    ___||  |_|  ||  |_|  || |_|   ||      _||       ||    __  |  |   |  |\n"
           "||   |    |       ||       ||       ||     |_ |   _   ||   |  | |  |   |  |\n"
           "||___|    |_______||_______||______| |_______||__| |__||___|  |_|  |___|  |\n"
           "+-------------------------------------------------------------------------+\n\n"
           "Welcome to our foodcart! Would you like to order? (Y or N): ");
    scanf(" %c", &userChoice);

    if (!(userChoice == 'y' || userChoice == 'Y')) {
        system("cls");
        printf("+------------------------------------------------------------------------------+\n"
               "| _______  __   __  _______  __    _  ___   _    __   __  _______  __   __  __ |\n"
               "||       ||  | |  ||   _   ||  |  | ||   | | |  |  | |  ||       ||  | |  ||  ||\n"
               "||_     _||  |_|  ||  |_|  ||   |_| ||   |_| |  |  |_|  ||   _   ||  | |  ||  ||\n"
               "|  |   |  |       ||       ||       ||      _|  |       ||  | |  ||  |_|  ||  ||\n"
               "|  |   |  |       ||       ||  _    ||     |_   |_     _||  |_|  ||       ||__||\n"
               "|  |   |  |   _   ||   _   || | |   ||    _  |    |   |  |       ||       | __ |\n"
               "|  |___|  |__| |__||__| |__||_|  |__||___| |_|    |___|  |_______||_______||__||\n"
               "+------------------------------------------------------------------------------+\n");
        printf("Press enter to continue...");
        getchar();
        getchar();
        return;
    }

    while (userChoice == 'y' || userChoice == 'Y') {
        system("cls");
        printf("\t+------------------------------------+\n"
               "\t| __   __  _______  __    _  __   __ |\n"
               "\t||  |_|  ||       ||  |  | ||  | |  ||\n"
               "\t||       ||    ___||   |_| ||  | |  ||\n"
               "\t||       ||   |___ |       ||  |_|  ||\n"
               "\t||       ||    ___||  _    ||       ||\n"
               "\t|| ||_|| ||   |___ | | |   ||       ||\n"
               "\t||_|   |_||_______||_|  |__||_______||\n"
               "\t+------------------------------------+\n"
               "========================================================\n"
               "Milktea: \n"
               "\t1. Choco ......................... Php 49.00\n"
               "\t2. Taro .......................... Php 49.00\n"
               "\t3. Winter Melon .................. Php 49.00\n"
               "\t4. Cookies n' Cream .............. Php 49.00\n\n"
               "Iced Coffee: \n"
               "\t5. Americano ..................... Php 49.00\n"
               "\t6. Macchiato ..................... Php 49.00\n"
               "\t7. Coffee w/ Matcha .............. Php 49.00\n"
               "\t8. Coffee Jelly .................. Php 49.00\n\n"
               "Snacks: \n"
               "\t9. Cheesy Fries .................. Php 20.00\n"
               "\t10. Siomai ....................... Php 20.00\n"
               "\t11. Tempura ...................... Php 20.00\n"
               "\t12. Fishball ..................... Php 1.00\n\n"
               "Beverages: \n"
               "\t13. Water ........................ Php 15.00\n"
               "\t14. Coke ......................... Php 20.00\n"
               "\t15. Sting ........................ Php 20.00\n"
               "\t16. Yakult ....................... Php 15.00\n\n"
               "Chips: \n"
               "\t17. Oishi ........................ Php 10.00\n"
               "\t18. Lays ......................... Php 20.00\n"
               "\t19. Fishda ....................... Php 10.00\n"
               "\t20. Onion Rings .................. Php 10.00\n\n");

        printf("Enter your order: ");
        scanf("%d", &userOrder);
        getchar();
        printf("How many: ");
        scanf("%d", &quantity);

        switch (userOrder) {
            case 1:
                printf("You have ordered %d Choco Milktea!", quantity);
                totalCost += (chocoMilktea * quantity);
                break;
            case 2:
                printf("You have ordered %d Taro Milktea!", quantity);
                totalCost += (taroMilktea * quantity);
                break;
            case 3:
                printf("You have ordered %d Winter Melon Milktea!", quantity);
                totalCost += (wmelonMilktea * quantity);
                break;
            case 4:
                printf("You have ordered %d Cookies n' Cream Milktea!", quantity);
                totalCost += (cookiesMilktea * quantity);
                break;
            case 5:
                printf("You have ordered %d Americano!", quantity);
                totalCost += (americanoCoffee * quantity);
                break;
            case 6:
                printf("You have ordered %d Macchiato!", quantity);
                totalCost += (macchiatoCoffee * quantity);
                break;
            case 7:
                printf("You have ordered %d Coffee w/ Matcha!", quantity);
                totalCost += (matchaCoffee * quantity);
                break;
            case 8:
                printf("You have ordered %d Coffee Jelly!", quantity);
                totalCost += (jellyCoffee * quantity);
                break;
            case 9:
                printf("You have ordered %d Cheesy Fries!", quantity);
                totalCost += (cheesyFries * quantity);
                break;
            case 10:
                printf("You have ordered %d Siomai!", quantity);
                totalCost += (siomai * quantity);
                break;
            case 11:
                printf("You have ordered %d Tempura!", quantity);
                totalCost += (tempura * quantity);
                break;
            case 12:
                printf("You have ordered %d Fishball!", quantity);
                totalCost += (fishball * quantity);
                break;
            case 13:
                printf("You have ordered %d Water!", quantity);
                totalCost += (bottledWater * quantity);
                break;
            case 14:
                printf("You have ordered %d Coke!", quantity);
                totalCost += (coke * quantity);
                break;
            case 15:
                printf("You have ordered %d Sting!", quantity);
                totalCost += (sting * quantity);
                break;
            case 16:
                printf("You have ordered %d Yakult!", quantity);
                totalCost += (yakult * quantity);
                break;
            case 17:
                printf("You have ordered %d Oishi!", quantity);
                totalCost += (oishi * quantity);
                break;
            case 18:
                printf("You have ordered %d Lays!", quantity);
                totalCost += (lays * quantity);
                break;
            case 19:
                printf("You have ordered %d Fishda!", quantity);
                totalCost += (fishda * quantity);
                break;
            case 20:
                printf("You have ordered %d Onion rings!", quantity);
                totalCost += (onionRings * quantity);
                break;
            default:
                printf("Invalid order...\n");
        }

        printf("\nWould you like to order again? (Y or N): ");
        scanf(" %c", &userChoice);
        getchar();
    }

    printf("The current total cost is: %.2f \n", totalCost);
    printf("Enter customer's money on hand: ");
    scanf("%f", &moneyOnHand);

    change = moneyOnHand - totalCost;

    printf("+-------------------------------------------------------------+\n"
           "| ______    _______  _______  _______  ___   _______  _______ |\n"
           "||    _ |  |       ||       ||       ||   | |       ||       ||\n"
           "||   | ||  |    ___||       ||    ___||   | |    _  ||_     _||\n"
           "||   |_||_ |   |___ |       ||   |___ |   | |   |_| |  |   |  |\n"
           "||    __  ||    ___||      _||    ___||   | |    ___|  |   |  |\n"
           "||   |  | ||   |___ |     |_ |   |___ |   | |   |      |   |  |\n"
           "||___|  |_||_______||_______||_______||___| |___|      |___|  |\n"
           "+-------------------------------------------------------------+\n"
           "\t\tTotal Cost: %.2f\n"
           "\t\tMoney on Hand: %.2f\n"
           "\t\tChange: %.2f\n\n"
           "Made by: Riel, Nico, Loel, Glen\n", totalCost, moneyOnHand, change);

    printf("Press enter to continue...");
    getchar();
    getchar();
}

// MULTIPLE CHOICE EXAM PROGRAM
void runMultipleChoiceExam() {
         // 50 items multiple choice exam using switch

        // Declare variables
        int totalItems = 50, // Total number of items in the quiz
            totalScore = 0;  // Score of the user in the quiz

        char itemChoice; // We used null for the value as a placeholder here, this variable stores the users answer.


        // Menu and direction
        system("cls"); // Clears console to show the menu
        printf("Programming Multiply Choice Exam\n\n"
               "Direction: Choose the correct letter for your answer.\n"
               "Your final score will be shown at the end of the quiz.\n"
               "Incorrect inputs are wrong.\n"
               "Click any key to start.\n");
            
        getchar(); // This stores the key the user inputs to continue



        // QUESTION 1
    system("cls"); // Clears console to show the question      
    printf("1. Which is an example of a low-level programming language\n" // First question and choices
            "A. Java\n"                  
            "B. Visual Basic\n"
            "C. HTML\n"
            "D. C\n"
            "Enter your answer: ");

    scanf(" %c", &itemChoice); // Stores the users choice to be processed by a switch statement below
    getchar(); // clears the newline in the input buffer
    switch (itemChoice) { // Processes the answers the user has given
        case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':  // Group of all the incorrect answers since same ra man silag output, gigroup ra nako sila
                        system("cls"); 
                        printf("You are incorrect! Click any key to continue");
                        getchar();
                        break;
                    case 'd':
                    case 'D':
                        system("cls");
                        printf("You are correct! Click any key to continue");
                        getchar();
                        totalScore++; // Increments the score of the user
                        break;
                    default:
                        printf("Invalid input.");
               } // Switch closing bracket lol
        
    // Question 2
    system("cls");
    printf("2. What is the size of 'int' data type in C (on most systems)?\n"
           "A. 1 byte\n"
           "B. 2 bytes\n"
           "C. 4 bytes\n"
           "D. 8 bytes\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'int' is typically 4 bytes on most systems.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! 'int' is typically 4 bytes.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 3
    system("cls");
    printf("3. Which header file is required to use printf() function?\n"
           "A. <stdlib.h>\n"
           "B. <stdio.h>\n"
           "C. <string.h>\n"
           "D. <math.h>\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! <stdio.h> is required for printf().\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! <stdio.h> contains printf() function.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 4
    system("cls");
    printf("4. What is the correct way to declare a variable in C?\n"
           "A. int 123variable;\n"
           "B. int variable-name;\n"
           "C. int variable_name;\n"
           "D. int variable name;\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Variable names can contain letters, digits, and underscores.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! 'int variable_name;' is a valid declaration.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 5
    system("cls");
    printf("5. Which operator is used for assignment in C?\n"
           "A. ==\n"
           "B. =\n"
           "C. :=\n"
           "D. <-\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! The '=' operator is used for assignment.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! '=' is the assignment operator.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 6
    system("cls");
    printf("6. What will be the output of: printf(\"%%d\", 5+3);\n"
           "A. 5+3\n"
           "B. 8\n"
           "C. %d\n"
           "D. Error\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! It will output 8 (the result of 5+3).\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! It will output 8.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 7
    system("cls");
    printf("7. Which data type is used to store a single character?\n"
           "A. int\n"
           "B. float\n"
           "C. char\n"
           "D. string\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'char' is used to store a single character.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! 'char' stores a single character.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 8
    system("cls");
    printf("8. What is the correct syntax for an if statement?\n"
           "A. if x > 5 then\n"
           "B. if (x > 5)\n"
           "C. if x > 5:\n"
           "D. if [x > 5]\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! The correct syntax is 'if (condition)'.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'if (condition)' is the correct syntax.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 9
    system("cls");
    printf("9. Which loop executes at least once?\n"
           "A. for loop\n"
           "B. while loop\n"
           "C. do-while loop\n"
           "D. None of the above\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! do-while loop executes at least once.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! do-while loop executes at least once.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 10
    system("cls");
    printf("10. What does the '\\n' represent in printf()?\n"
           "A. New line\n"
           "B. New tab\n"
           "C. New space\n"
           "D. Nothing\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! '\\n' represents a new line.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! '\\n' creates a new line.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 11
    system("cls");
    printf("11. Which function is used to read input from user?\n"
           "A. printf()\n"
           "B. scanf()\n"
           "C. getchar()\n"
           "D. Both B and C\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
            system("cls");
            printf("Incorrect! Both scanf() and getchar() can read input.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'd': case 'D':
            system("cls");
            printf("Correct! Both scanf() and getchar() read input.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 12
    system("cls");
    printf("12. What is the range of 'char' data type?\n"
           "A. -128 to 127\n"
           "B. 0 to 255\n"
           "C. -32768 to 32767\n"
           "D. Depends on system\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'char' typically ranges from -128 to 127.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! 'char' ranges from -128 to 127.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 13
    system("cls");
    printf("13. Which operator is used for equality comparison?\n"
           "A. =\n"
           "B. ==\n"
           "C. ===\n"
           "D. !=\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! '==' is used for equality comparison.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! '==' checks for equality.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 14
    system("cls");
    printf("14. What is the correct way to declare an array of 5 integers?\n"
           "A. int array[5];\n"
           "B. int[5] array;\n"
           "C. array int[5];\n"
           "D. int array(5);\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'int array[5];' is the correct syntax.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! 'int array[5];' declares an array of 5 integers.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 15
    system("cls");
    printf("15. Array indexing in C starts from:\n"
           "A. 1\n"
           "B. 0\n"
           "C. -1\n"
           "D. Depends on declaration\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Array indexing starts from 0 in C.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! Array indexing starts from 0.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 16
    system("cls");
    printf("16. Which statement is used to exit from a loop?\n"
           "A. continue\n"
           "B. break\n"
           "C. return\n"
           "D. exit\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'break' is used to exit from a loop.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'break' exits from a loop.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 17
    system("cls");
    printf("17. What does 'continue' statement do in a loop?\n"
           "A. Exits the loop\n"
           "B. Skips current iteration\n"
           "C. Restarts the loop\n"
           "D. Does nothing\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'continue' skips the current iteration.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'continue' skips the current iteration.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 18
    system("cls");
    printf("18. Which is the correct syntax for a for loop?\n"
           "A. for (i=0; i<10; i++)\n"
           "B. for i=0 to 10\n"
           "C. for (i=0; i<10)\n"
           "D. for i in range(10)\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'for (init; condition; increment)' is correct.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! That's the proper for loop syntax.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 19
    system("cls");
    printf("19. What is the purpose of the 'return' statement?\n"
           "A. To exit a loop\n"
           "B. To return a value from function\n"
           "C. To print output\n"
           "D. To declare variables\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'return' returns a value from a function.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'return' returns a value from a function.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 20
    system("cls");
    printf("20. Which data type has the largest storage size?\n"
           "A. int\n"
           "B. float\n"
           "C. double\n"
           "D. char\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'double' typically has the largest size.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! 'double' is typically 8 bytes.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 21
    system("cls");
    printf("21. What is the default return type of main() function?\n"
           "A. void\n"
           "B. int\n"
           "C. float\n"
           "D. char\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! The default return type of main() is int.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! main() returns int by default.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 22
    system("cls");
    printf("22. Which operator is used to access structure members?\n"
           "A. ->\n"
           "B. .\n"
           "C. ::\n"
           "D. Both A and B\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
            system("cls");
            printf("Incorrect! Both '.' and '->' are used for structure members.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'd': case 'D':
            system("cls");
            printf("Correct! Both '.' and '->' access structure members.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 23
    system("cls");
    printf("23. What does the modulo operator (%) do?\n"
           "A. Division\n"
           "B. Multiplication\n"
           "C. Returns remainder\n"
           "D. Percentage calculation\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! The % operator returns the remainder of division.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! % returns the remainder of division.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 24
    system("cls");
    printf("24. Which is NOT a valid C identifier?\n"
           "A. _variable\n"
           "B. variable1\n"
           "C. 1variable\n"
           "D. variable_\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Identifiers cannot start with a digit.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! Identifiers cannot start with a number.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 25
    system("cls");
    printf("25. What is the correct way to comment a single line in C?\n"
           "A. // This is a comment\n"
           "B. # This is a comment\n"
           "C. <!-- This is a comment -->\n"
           "D. * This is a comment\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! // is used for single-line comments.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! // creates a single-line comment.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 26
    system("cls");
    printf("26. Which function is used to find the length of a string?\n"
           "A. length()\n"
           "B. strlen()\n"
           "C. size()\n"
           "D. len()\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! strlen() is used to find string length.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! strlen() returns the length of a string.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 27
    system("cls");
    printf("27. What is the output of: printf(\"%%c\", 65);\n"
           "A. 65\n"
           "B. A\n"
           "C. %c\n"
           "D. Error\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! It prints 'A' (ASCII value 65).\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 65 is the ASCII value of 'A'.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 28
    system("cls");
    printf("28. Which is the correct syntax for switch statement?\n"
           "A. switch (variable) { case 1: ... }\n"
           "B. switch variable { case 1: ... }\n"
           "C. switch [variable] { case 1: ... }\n"
           "D. switch variable: { case 1: ... }\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'switch (variable)' is the correct syntax.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! That's the proper switch syntax.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 29
    system("cls");
    printf("29. What happens if you don't use 'break' in switch cases?\n"
           "A. Compilation error\n"
           "B. Fall-through to next case\n"
           "C. Program terminates\n"
           "D. Nothing happens\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Without 'break', execution falls through to next case.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! Execution continues to the next case.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 30
    system("cls");
    printf("30. Which loop is best when you know the exact number of iterations?\n"
           "A. while loop\n"
           "B. do-while loop\n"
           "C. for loop\n"
           "D. All are equal\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! for loop is best for known iterations.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! for loop is ideal for known iterations.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input.");
            getchar(); getchar();
    }

    // Question 31
    system("cls");
    printf("31. What is the correct way to declare a function?\n"
           "A. function int myFunc()\n"
           "B. int myFunc()\n"
           "C. myFunc() int\n"
           "D. declare int myFunc()\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'returnType functionName()' is correct.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'int myFunc()' is proper function declaration.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 32
    system("cls");
    printf("32. Which symbol is used to dereference a pointer?\n"
           "A. &\n"
           "B. *\n"
           "C. #\n"
           "D. @\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! '*' is used to dereference a pointer.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! '*' dereferences a pointer.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 33
    system("cls");
    printf("33. What is the format specifier for float in printf()?\n"
           "A. %%d\n"
           "B. %%f\n"
           "C. %%c\n"
           "D. %%s\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! %%f is used for float values.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! %%f is the format specifier for float.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 34
    system("cls");
    printf("34. Which logical operator represents AND?\n"
           "A. &\n"
           "B. &&\n"
           "C. |\n"
           "D. ||\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! && is the logical AND operator.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! && is the logical AND operator.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 35
    system("cls");
    printf("35. What is the size of 'float' data type?\n"
           "A. 2 bytes\n"
           "B. 4 bytes\n"
           "C. 8 bytes\n"
           "D. 1 byte\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'float' is typically 4 bytes.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'float' is typically 4 bytes.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 36
    system("cls");
    printf("36. Which statement is used to include header files?\n"
           "A. import\n"
           "B. include\n"
           "C. #include\n"
           "D. using\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! #include is used to include header files.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! #include includes header files.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 37
    system("cls");
    printf("37. What does the increment operator ++ do?\n"
           "A. Adds 2 to variable\n"
           "B. Adds 1 to variable\n"
           "C. Multiplies by 2\n"
           "D. Subtracts 1\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! ++ adds 1 to the variable.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! ++ increments the variable by 1.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 38
    system("cls");
    printf("38. Which is the correct way to initialize an array?\n"
           "A. int arr[5] = {1,2,3,4,5};\n"
           "B. int arr[5] = (1,2,3,4,5);\n"
           "C. int arr[5] = [1,2,3,4,5];\n"
           "D. int arr[5] = 1,2,3,4,5;\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'b': case 'B': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Use curly braces {} for array initialization.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'a': case 'A':
            system("cls");
            printf("Correct! Curly braces are used for initialization.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 39
    system("cls");
    printf("39. What is the difference between ++i and i++?\n"
           "A. No difference\n"
           "B. ++i is pre-increment, i++ is post-increment\n"
           "C. ++i is faster\n"
           "D. i++ is faster\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! ++i is pre-increment, i++ is post-increment.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! ++i increments before use, i++ after use.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 40
    system("cls");
    printf("40. Which operator has the highest precedence?\n"
           "A. +\n"
           "B. *\n"
           "C. ()\n"
           "D. =\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! Parentheses () have the highest precedence.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! Parentheses have the highest precedence.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 41
    system("cls");
    printf("41. What is the purpose of 'void' keyword?\n"
           "A. To declare empty variables\n"
           "B. To indicate no return value\n"
           "C. To delete variables\n"
           "D. To make variables global\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'void' indicates no return value.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'void' means no return value.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 42
    system("cls");
    printf("42. Which escape sequence represents a tab?\n"
           "A. \\n\n"
           "B. \\t\n"
           "C. \\r\n"
           "D. \\b\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! \\t represents a tab character.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! \\t is the tab escape sequence.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 43
    system("cls");
    printf("43. What is the correct way to declare a constant?\n"
           "A. constant int x = 5;\n"
           "B. const int x = 5;\n"
           "C. final int x = 5;\n"
           "D. static int x = 5;\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'const' keyword is used for constants.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'const' declares a constant.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 44
    system("cls");
    printf("44. Which function is used to allocate memory dynamically?\n"
           "A. alloc()\n"
           "B. malloc()\n"
           "C. memory()\n"
           "D. new()\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! malloc() allocates memory dynamically.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! malloc() allocates dynamic memory.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 45
    system("cls");
    printf("45. What does the 'static' keyword do for local variables?\n"
           "A. Makes them global\n"
           "B. Preserves value between function calls\n"
           "C. Deletes them\n"
           "D. Makes them constant\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! 'static' preserves value between function calls.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! 'static' preserves variable value.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 46
    system("cls");
    printf("46. Which is the correct syntax for multi-line comments?\n"
           "A. // comment //\n"
           "B. /* comment */\n"
           "C. <!-- comment -->\n"
           "D. # comment #\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! /* */ is used for multi-line comments.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! /* */ creates multi-line comments.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 47
    system("cls");
    printf("47. What is the maximum number of dimensions an array can have in C?\n"
           "A. 2\n"
           "B. 3\n"
           "C. No limit\n"
           "D. 12\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'b': case 'B': case 'd': case 'D':
            system("cls");
            printf("Incorrect! C has no theoretical limit on array dimensions.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'c': case 'C':
            system("cls");
            printf("Correct! C has no limit on array dimensions.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 48
    system("cls");
    printf("48. Which function is used to copy strings?\n"
           "A. strcopy()\n"
           "B. strcpy()\n"
           "C. stringcopy()\n"
           "D. copy()\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! strcpy() is used to copy strings.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! strcpy() copies strings.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 49
    system("cls");
    printf("49. What is the output of sizeof(char)?\n"
           "A. 0\n"
           "B. 1\n"
           "C. 2\n"
           "D. Depends on system\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! sizeof(char) is always 1 by definition.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! sizeof(char) is always 1.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Question 50
    system("cls");
    printf("50. Which is the correct way to check if two strings are equal?\n"
           "A. if (str1 == str2)\n"
           "B. if (strcmp(str1, str2) == 0)\n"
           "C. if (str1.equals(str2))\n"
           "D. if (str1 === str2)\n"
           "Enter your answer: ");
    scanf(" %c", &itemChoice);
    switch (itemChoice) {
        case 'a': case 'A': case 'c': case 'C': case 'd': case 'D':
            system("cls");
            printf("Incorrect! strcmp() returns 0 when strings are equal.\nPress any key to continue...");
            getchar(); getchar();
            break;
        case 'b': case 'B':
            system("cls");
            printf("Correct! strcmp() returns 0 for equal strings.\nPress any key to continue...");
            getchar(); getchar();
            totalScore++;
            break;
        default:
            printf("Invalid input. Moving to next question...");
            getchar(); getchar();
    }

    // Final Score Display
    system("cls");
    printf("=== QUIZ COMPLETED ===\n"
           "Made by: Riel, Loel, Nico, and Glen\n"
           "To be submitted to Mr. Darwin Desamparado\n\n\n");
    printf("Your final score: %d out of 50\n", totalScore);
    printf("Percentage: %.1f%%\n", (totalScore * 100.0) / 50);
    
    if (totalScore >= 45) {
        printf("Excellent! You have mastered C programming basics!\n");
    } else if (totalScore >= 35) {
        printf("Good job! You have a solid understanding of C programming.\n");
    } else if (totalScore >= 25) {
        printf("Fair performance. Keep practicing C programming concepts.\n");
    } else {
        printf("You need more practice with C programming fundamentals.\n");
    }
    
    printf("\nThank you for taking the quiz!\n");
    printf("Press any key to exit...");
    getchar();
    

}
