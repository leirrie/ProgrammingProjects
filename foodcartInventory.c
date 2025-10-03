#include <stdio.h>
#include <stdlib.h>

int main() {

    // Inventory variables
    // Products Fastory Cost, Quantity, Selling Price, Profit
    // Capital - cost to make or factory price
    // SPrice or selling price - customer price
    // Profit = Selling price - Capital

    float cokeCapital = 10, cokeSPrice = 15, cokeProfit = (cokeSPrice - cokeCapital), // Coke
          bwaterCapital = 9, bwaterSPrice = 15, bwaterProfit = (bwaterSPrice - bwaterCapital), // Bottled water
          stingCapital = 13 , stingSPrice = 20, stingProfit = (stingSPrice - stingCapital), // Sting energy drink
          yakultCapital = 10, yakultSPrice = 15, yakultProfit = (yakultSPrice - yakultCapital), // Yakult
          gatoradeCapital = 35, gatoradeSPrice = 45, gatoradeProfit = (gatoradeSPrice - gatoradeCapital), // Gatorade
          oishiCapital = 9, oishiSPrice = 12, oishiProfit = (oishiSPrice - oishiCapital), // Oishi
          laysCapital = 20, laysSPrice = 25, laysProfit = (laysSPrice - laysCapital), // Frito lays chips
          fishdaCapital = 9, fishdaSPrice = 12, fishdaProfit = (fishdaSPrice - fishdaCapital), // Fishda chips
          oRingsCapital = 9, oRingsSPrice = 12, oRingsProfit = (oRingsSPrice - oRingsCapital), // Onion Rings
          cjellyCapital = 18, cjellySPrice = 25, cjellyProfit = (cjellySPrice - cjellyCapital); // Coffee Jelly
          
    // Stores products initial qty
    int cokeQuantity = 20,
        bwaterQuantity = 20,
        stingQuantity = 20,
        yakultQuantity = 20,
        gatoradeQuantity = 20,
        oishiQuantity = 20,
        laysQuantity = 20,
        fishdaQuantity = 20,
        oRingsQuantity = 20,
        cjellyQuantity = 20;

    // User-input variables
    int userChoice = 0;
    int updateStocksChoice = 0;
    char loopOn = 'y';

    // Inventory Spreadsheet Border
    char border[] = "--------------------------------------------------------------------------------------------------------";

    do {
        system("cls"); // clear console

        printf( "+-------------------------------------------------------------------------------+\n"
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
                    case 1: // Display the inventory

                        system("cls"); // Clear console

                        printf( "+%54s+\n" // Border
                                "|%20s|%20s|%20s|%20s|%20s|\n" // Columns and Column names
                                "+%54s+\n", border, "Product Name ", "Quantity ", "Initial Price ", "Selling Price ", "Profit ", border);

                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Coke", cokeQuantity, cokeCapital, cokeSPrice, cokeProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Bottled Water", bwaterQuantity, bwaterCapital, bwaterSPrice, bwaterProfit); 
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Sting", stingQuantity, stingCapital, stingSPrice, stingProfit); 
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Yakult", yakultQuantity, yakultCapital, yakultSPrice, yakultProfit); 
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Gatorade", gatoradeQuantity, gatoradeCapital, gatoradeSPrice, gatoradeProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Oishi", oishiQuantity, oishiCapital, oishiSPrice, oishiProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Lays", laysQuantity, laysCapital, laysSPrice, laysProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Fishda", fishdaQuantity, fishdaCapital, fishdaSPrice, fishdaProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Onion Rings", oRingsQuantity, oRingsCapital, oRingsSPrice, oRingsProfit);
                        printf( "|%20s|%20d|Php %16.2f|Php %16.2f|Php %16.2f|\n", "Coffee Jelly", cjellyQuantity, cjellyCapital, cjellySPrice, cjellyProfit);
                        printf( "+%54s+\n", border); // Border

                        printf("Press enter to return to main menu..."); // Prompt to return to main()
                        getchar(); getchar(); // receives the users input

                        break;

                    case 2: // Update stocks/quantity
                        
                        system("cls");
                        getchar();
                        printf( "Which product would you like to update? (The program will automatically restart when you enter an invalid choice.)\n"
                                "1. Coke    \n"  
                                "2. Bottled Water\n"
                                "3. Sting\n"
                                "4. Yakult\n"
                                "5. Gatorade\n"
                                "6. Oishi\n"
                                "7. Lays\n"
                                "8. Fishda\n"
                                "9. Onion \n"
                                "10.Coffee Jelly\n"
                                "Enter choice: ");
                        scanf("%d", &updateStocksChoice);


                        switch (updateStocksChoice) { // Processes the userr input
                            case 1:
                                printf("Enter new quantity for Coke: "); // Prompt
                                scanf("%d", &cokeQuantity); // Rewriting of variable value

                                printf("The updated quantity of Coke is %d\n", cokeQuantity); // Message
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
                                printf("Invalid product ID! \n");
                                return main();
                        }

                        printf("You have successfully updated the inventory! \n"
                               "Press enter to return...");
                                getchar(); getchar();
                        
                        break;
                    case 3:
                        loopOn = 'n';
                        break;
                    default:
                        printf("Invalid Input!");
                        return main();




                }


            
    } while (loopOn == 'y'||loopOn == 'Y');


    printf("Thank you for using our service!\n"
           "Made by Riel, Glen, Loel, and Nico");
    return 0;
}