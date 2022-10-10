// HackerRank - Digit Frequency

#include <stdio.h>
#include <string.h> // Importing string preprocessor for string manipulation
#include <math.h>
#include <stdlib.h>
// Making a function to count the frequency of each digit
int count(char *st, char c)
{
    int count = 0; // Initializing count to 0
    // Traverse the string
    for (int i = 0; i < strlen(st); i++)
    {
        // If the character is found, increment count
        if (st[i] == c)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    // Return the count
    return count;
};
int main()
{
    // Declaring test variable with limit of 1000 characters
    char st[1000];
    // Declaring array of numbers for easy comparison with the string
    char dig[] = "0123456789";

    // Taking input(test case) from the user
    scanf("%s", st);
    // Printing the output
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count(st, dig[i]));
    }
    return 0;
}
