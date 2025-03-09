#include <stdio.h>
#include <string.h> // Required for string functions

/*
CHAPTER 8 – STRINGS
A string is a 1-D character array terminated by a null character (‘\0’)
A null character is used to denote the termination of a string. Characters are stored in
contiguous memory locations.

INITIALIZING STRINGS
Since a string is an array of characters, it can be initialized as follows:
*/
int main() {
    char s[] = {'S', 'O', 'H', 'A', 'N', '\0'};
    // There is another shortcut for initializing string in C language:
    char s2[] = "SOHAN"; // In this case, C adds a null character automatically.

    printf("String 1: %s\n", s);
    printf("String 2: %s\n", s2);

    /*
    STRINGS IN MEMORY
    A string is stored just like an array in memory.
    
    Quick Quiz: Create a string using double quotes and print its content using a loop.
    */
    printf("Characters in s2 using a loop: ");
    for (int i = 0; s2[i] != '\0'; i++) {
        printf("%c ", s2[i]);
    }
    printf("\n");

    /*
    PRINTING STRINGS
    A string can be printed character by character using printf and %c.
    But there is another convenient way to print strings in C.
    */
    char st[] = "SOHAN";
    printf("%s", st); // Print the entire string.

    /*
    TAKING STRING INPUT FROM THE USER
    We can use %s with scanf to take string input from the user:
    */
    char input[50];
    printf("Enter a string (single word): ");
    scanf("%s", input);
    printf("You entered: %s\n", input);

    /*
    Note:
    1. The string should be short enough to fit into the array.
    2. scanf cannot be used to input multi-word strings with spaces.
    */
    
    /*
    GETS() AND PUTS()
    gets() is a function which can be used to receive a multi-word string.
    */
    char multiWord[30];
    printf("Enter a string (multi-word allowed): ");
    getchar(); // To consume newline left in buffer
    gets(multiWord); // Unsafe, use fgets() in real applications
    puts("You entered:");
    puts(multiWord);
    
    /*
    DECLARING A STRING USING POINTERS
    We can declare strings using pointers.
    */
    char *ptr = "sohan";
    printf("Pointer string: %s\n", ptr);
    // A string defined using pointers can be reinitialized.
    ptr = "Rohan";
    printf("Modified pointer string: %s\n", ptr);

    /*
    STANDARD LIBRARY FUNCTIONS FOR STRINGS
    C provides a set of standard library functions for string manipulation.
    */
    char source[] = "sohan";
    char target[30];
    
    /*
    STRLEN()
    This function is used to count the number of characters in the string excluding the null
    (‘\0’) characters.
    */
    printf("Length of source: %d\n", (int)strlen(source));
    
    /*
    STRCPY()
    This function is used to copy the content of the second string into the first string passed to it.
    */
    strcpy(target, source);
    printf("Copied string: %s\n", target);
    
    /*
    STRCAT()
    This function is used to concatenate two strings.
    */
    char s3[12] = "hello";
    char s4[] = "sohan";
    strcat(s3, s4); // s3 now contains "helloharry"
    printf("Concatenated string: %s\n", s3);
    
    /*
    STRCMP()
    This function is used to compare two strings. It returns 0 if the strings are equal, a
    negative value if the first string's mismatching character's ASCII value is less than the
    second string's corresponding mismatching character, and a positive value otherwise.
    */
    int cmp1 = strcmp("far", "joke");
    int cmp2 = strcmp("joke", "far");
    printf("strcmp(\"far\", \"joke\") = %d\n", cmp1);
    printf("strcmp(\"joke\", \"far\") = %d\n", cmp2);
    
    return 0;
}
