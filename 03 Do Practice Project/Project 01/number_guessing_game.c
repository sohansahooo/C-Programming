#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILE_NAME "game_number.txt"

int main(int argc, char *argv[])
{
    static int number = -1;

    // Check if the number has already been saved in the file
    FILE *file = fopen(FILE_NAME, "r");
    if (file)
    {
        // If the file exists, read the number from the file
        fscanf(file, "%d", &number);
        fclose(file);
    }

    // If the number is not in the file (i.e., first time), generate a new number and save it to the file
    if (number == -1)
    {
        srand(time(0));            // Seed only once
        number = rand() % 100 + 1; // Generate a random number between 1 and 100

        // Save the generated number to the file
        file = fopen(FILE_NAME, "w");
        if (file)
        {
            fprintf(file, "%d", number);
            fclose(file);
        }
    }

    if (argc != 2)
    {
        printf("Please provide a guess as a command-line argument.\n");
        return 1;
    }

    int guess = atoi(argv[1]); // Convert the user's guess from string to integer

    printf("Entered guess: %d\n", guess);

    // Check the guess and print the appropriate message
    if (guess > number)
    {
        printf("Lower number please!\n");
    }
    else if (guess < number)
    {
        printf("Higher number please!\n");
    }
    else
    {
        printf("🎉 Congratulations! You guessed the number %d!\n", number);

        // Reset the number after the game ends (optional)
        number = -1;
        remove(FILE_NAME); // Delete the file to reset the game
    }

    return 0;
}
