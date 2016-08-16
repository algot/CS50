#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
	string name = GetString();
    bool firstletter = false;    

    for (int i=0, n=strlen(name); i < n; i++)
    {
        if(name[i] != ' ' && firstletter == false)
        {
            firstletter = true;
            printf("%c", name[i]);
        }
        else
        {
            firstletter = false;
        }
    }
    printf("\n");
  
	return 0;
}
