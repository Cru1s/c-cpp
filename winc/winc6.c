#include <stdio.h>
#include <string.h>

int main()

{
    char str[50] = "1,2,3,4";
    char s[2] = ",";
    char* token;

    token = strtok(str, s);
    while(token != NULL)
    {
        printf(" %s\n", token );
        token = strtok(NULL, s);
    }
    return 0;
}