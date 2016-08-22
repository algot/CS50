#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])  
{
    string key = argv[1];

    if (argc != 2)
    {
        printf ("Incorrect number of arguments!\n");

        return 1;
    }
    else
    {
        for (int i=0, n = strlen(key); i < n; i++)
        {
            if (!isalpha(key[i]))
            {
                printf("Enter alphabetic chars only!\n");
                
                return 1;
            }
        }
    }
    
    int keyLength = strlen(key);
    string input = GetString();

    for (int i = 0, j = 0, n = strlen(input); i < n; i++)
    {
        char current_char = input[i];

        int currentKey = tolower(key[j % keyLength]) - 'a';
        
        if (isupper(current_char))
        {
            int offset_from_A_initial = current_char - 'A';
            int offset_from_A_processed = offset_from_A_initial + currentKey;
            int module = offset_from_A_processed % 26;
               
            printf("%c", 'A' + module);
        }
        else if (islower(current_char))
        {
            int offset_from_a_initial = current_char - 'a';
            int offset_from_a_processed = offset_from_a_initial + currentKey;
            int module = offset_from_a_processed % 26;

            printf("%c", 'a' + module);
        }
        else
        {
            printf("%c", current_char);
        }
    }

    printf("\n");

    return 0;
}
