// Caesar cipher

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])  
{
    // Check if correct # of arguments given
    if (argc != 2 && !isdigit(argv[1]))
    {
        printf ("Incorrect argument!\n");

        return 1;
    }

    // Convert input to int type
    int k = atoi(argv[1]);

    string input = GetString();

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        char current_char = input[i];
        // Keep case of letter
        if (isupper(current_char))
        {
            int offset_from_A_initial = current_char - 'A';
            int offset_from_A_processed = offset_from_A_initial + k;
            int module = offset_from_A_processed % 26;
               
            printf("%c", 'A' + module);
        }
        else if (islower(current_char))
        {
            int offset_from_a_initial = current_char - 'a';
            int offset_from_a_processed = offset_from_a_initial + k;
            int module = offset_from_a_processed % 26;

            printf("%c", 'a' + module);
        }
        else
        {
            // return unchanged
            printf("%c", current_char);
        }
    }

    printf("\n");

    return 0;
}
