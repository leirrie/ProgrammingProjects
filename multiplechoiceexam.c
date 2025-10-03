#include <stdio.h>
#include <stdlib.h>
int main() {

        // 50 items multiple choice exam using switch

        // Declare variables
        int totalItems = 50, // Total number of items in the quiz
            totalScore = 0;  // Score of the user in the quiz

        char itemChoice; // We used null for the value as a placeholder here, this variable stores the users answer.


        // Menu and direction
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
    

    return 0;
}