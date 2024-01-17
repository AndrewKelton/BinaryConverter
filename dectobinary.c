#include<stdio.h>
#include<string.h>
#define LIMIT 10

int main()
{
    int dec;
    int bin[LIMIT];
    int i = 0;
    char binS[LIMIT];

    printf("Enter a decimal number to be converted to binary: ");
    scanf("%d", &dec);

    while (dec != 0)
    {
        if (dec != 1)
        {
            bin[i] = dec % 2;
            dec /= 2;
            i++;
        }
        else if (dec == 1)
        {
            bin[i] = 1;
            dec = 0;
        }
    }

    int x = 0;
    while (bin[x] == 0 || bin[x] == 1)
    {
        x++;
    }

    for (int i = x-1; i > -1; i--)
    {
        printf("%d", bin[i]);
    }

    return 0;
}