#include <string.h>
#include <stdio.h>

int main()
{
    char string[50] = "C Course in VG";
    int string_length = strlen(string);

    char result[50];
    for (int i = 0; i<16; i++)
    {
        char c = string[i];
        if (c == ' ')
        {
            result[i] = '-';
        }    
        else
        { 
            result[i] = c;
        }
    }   
    printf("%s", result);
    return 0;
}