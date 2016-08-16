#include <stdio.h>
#include <cs50.h>
#include <math.h>

// 25¢, 10¢, 5¢, 1¢

int get_number_of_coins(int cents);

int main(void)
{
    float owed_in_dollars = 0;
    int owed_in_cents = 0;
    int coins_number = 0;
    
    while (true)
    {
        printf("O hai! How much change is owed?\n");
        owed_in_dollars = GetFloat();
        
        if (owed_in_dollars > 0)
            break;
    }
    
    owed_in_cents = (int) roundf(owed_in_dollars * 100);
    
    while (owed_in_cents >= 25)
    {
        coins_number++;
        owed_in_cents -= 25;
    }
    while (owed_in_cents >= 10)
    {
        coins_number++;
        owed_in_cents -= 10;
    }
    while (owed_in_cents >= 5)
    {
        coins_number++;
        owed_in_cents -= 5;
    }    
    while (owed_in_cents >= 1)
    {
        coins_number++;
        owed_in_cents -= 1;
    }    
    printf("%i\n", coins_number);
}

int get_number_of_coins(int cents)
{
    return 0;   
}