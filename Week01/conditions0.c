#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me an integer: ");
    int n = GetInt();
    
    if  (n > 0)
    {
        printf("You picked a positive number!\n");
    }
    
    else if (n < 0)
    {
        printf("You picked a negative number!\n");
    }
    else 
    {
        printf("You picked 0!\n");
    }
}
