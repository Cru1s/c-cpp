#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int length = 100;
    char line[100];

    file = fopen("data.txt", "r");
    float area, price;
    while (fgets(line, length, file) != NULL)
    {
        char *area_str = strtok(line, ",");
        char *price_str = strtok(NULL, ",");

        sscanf(area_str, "%f", &area);
        sscanf(price_str, "%f", &price);

        printf("area0= %.1f - price= %.1f\n", area, price);
    }
    fclose(file);

    return 0;
}
