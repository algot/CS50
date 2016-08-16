#include <stdio.h>
#include <cs50.h>

void drawStairs(int stairs_height);
void print_char(int repeat, char to_print);

int main(void)
{
    int height = 0;
    
    do {
    printf("Height: ");

    height = GetInt();
    if  (height == 0)
    {
        return 0;
    }
    } while (height < 1 || height > 23);
    drawStairs(height);
}

void drawStairs(int stairs_height)
{
    int spaces = stairs_height - 1;
    int sharps = 2;

    for(; spaces >= 0; spaces--, sharps++)    
    {
        print_char(spaces, ' ');
        print_char(sharps, '#');
        printf("\n");
    }
}

void print_char(int repeat, char to_print)
{
    for (int i = 0; i < repeat; i++)
    {
        printf("%c", to_print);
    }
}
