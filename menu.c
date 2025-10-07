#include <stdio.h>
#include <stdlib.h>

int main() {

    // Snack bar menu code
    // Project NO. 2 in C programming


    // Menu items variables declaratuon and prices
    float chocoMilktea = 49, taroMilktea = 49, wmelonMilktea = 49, cookiesMilktea = 49, // Milktea
          americanoCoffee = 49, macchiatoCoffee = 49, matchaCoffee = 49, jellyCoffee = 49,  // Coffee
          cheesyFries = 20, siomai = 20, tempura = 5, fishball = 1, // Snacks
          bottledWater = 15, coke = 20, sting = 20, yakult = 15, // Beverages o Mainom
          oishi = 10, lays = 20, fishda = 10, onionRings = 10; // Chips
    
    // Declare needed variable for computations
    float totalCost = 0, moneyOnHand = 0, change = (moneyOnHand - totalCost);

    // Order number variable
    int userOrder, quantity = 0;;

    // Choice variable whether to order again
    char userChoice;

    // Opening menu of the foodcart using ASCII art made online
    printf( "+-------------------------------------------------------------------------+\n"
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


        // Thank you message if the user leaves the program
        if (!(userChoice == 'y' || userChoice == 'Y')) {
            system("cls");
            printf( "+------------------------------------------------------------------------------+\n"
                    "| _______  __   __  _______  __    _  ___   _    __   __  _______  __   __  __ |\n"
                    "||       ||  | |  ||   _   ||  |  | ||   | | |  |  | |  ||       ||  | |  ||  ||\n"
                    "||_     _||  |_|  ||  |_|  ||   |_| ||   |_| |  |  |_|  ||   _   ||  | |  ||  ||\n"
                    "|  |   |  |       ||       ||       ||      _|  |       ||  | |  ||  |_|  ||  ||\n"
                    "|  |   |  |       ||       ||  _    ||     |_   |_     _||  |_|  ||       ||__||\n"
                    "|  |   |  |   _   ||   _   || | |   ||    _  |    |   |  |       ||       | __ |\n"
                    "|  |___|  |__| |__||__| |__||_|  |__||___| |_|    |___|  |_______||_______||__||\n"
                    "+------------------------------------------------------------------------------+\n");
        }





    // Loop of the entire menu and ordering process
    while (userChoice == 'y' || userChoice == 'Y') {
        // Menu prompt
        system("cls");
        printf( "\t+------------------------------------+\n"
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
               "\t20. Onion Rings .................. Php 10.00\n\n"
            );
        
        printf("Enter your order: "); // Prompts customer to enter order
        scanf("%d", &userOrder); // Store order
        getchar();
        printf("How many: "); // Prompts customer to enter quantity
        scanf("%d", &quantity); // Store quantity

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
                totalCost += (chocoMilktea * quantity);
                break;
            case 18:
                printf("You have ordered %d Lays!", quantity);
                totalCost += (chocoMilktea * quantity);
                break;
            case 19:
                printf("You have ordered %d Fishda!", quantity);
                totalCost += (chocoMilktea * quantity);
                break;
            case 20:
                printf("You have ordered %d Onion rings!", quantity);
                totalCost += (chocoMilktea * quantity);
                break;
            default:
                printf("Invalid order... Returning to Main Menu... \n");
                return main();
        }

        // Prompt for re-orders
        printf("\nWould you like to order again? (Y or N): \n");
        scanf(" %c", &userChoice);
        getchar();
    } 

    // Ask for customer's money
    printf("The current total cost is: %.2f \n", totalCost);
    printf("Enter customer's money on hand: ");
    scanf("%f", &moneyOnHand);

    // Compute change
    change = moneyOnHand - totalCost;
    
    // Displays the receipt
    printf( "+-------------------------------------------------------------+\n"
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
            "Made by: Riel, Nico, Loel, Glen", totalCost, moneyOnHand, change );

    return 0;
} 