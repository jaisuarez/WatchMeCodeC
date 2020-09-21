#include <stdio.h>
#include <stdbool.h>

// Print natural numbers recursively
static void printNaturalNumber(int startingNumber, int maximumCounter);

void main()
{
    int userInput;

    // Loop forever
    while(true)
    {
        // Ask the user how many natural numbers to print
        printf("\n\nEnter total natural numbers to print : ");
        scanf("%d", &userInput);

        printf("The first %d natural numbers are : \n", userInput);

        // Print the natural numbers recursively
        printNaturalNumber(1, userInput);
    }
}

static void printNaturalNumber(int startingNumber, int maximumCounter)
{
    if (startingNumber <= maximumCounter)
    {
        printf(" %d ", startingNumber);
        printNaturalNumber(startingNumber + 1, maximumCounter);
    }
}