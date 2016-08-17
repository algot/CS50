#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_wrong_char(char);
    
int main(void)
{

	string name = GetString();

    char firstChar = name[0];
    if (is_wrong_char(firstChar))
    {
        printf("%c", toupper(firstChar));
    }
    
    for (int i=1, n=strlen(name); i < n; i++)
    {
        char currentChar = name[i];
        if (is_wrong_char(currentChar) && name[i - 1] == ' ')
        {
            printf("%c", toupper(currentChar));
        }
    }
    
    printf("\n");
  
	return 0;
}

bool is_wrong_char(char charToCheck)
{
    if (charToCheck != ' ' && charToCheck != '.' && charToCheck != ',')
    {
        return true;
    }
    else 
    {
        return false;
    }
}
