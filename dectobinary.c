#include<stdio.h>
#include<string.h>
#define LIMIT 10

int main()
{
    int dec;
    int bin[LIMIT];
    int i = 0;

    printf("Enter a decimal number to be converted to binary: ");
    scanf("%d", &dec);

    while (dec != 0)
    {
        // calculations when dec' == 1
        if (dec != 1)
        {
            bin[i] = dec % 2;
            dec /= 2;
            i++;
        }
        // calculations when dec == 1
        else if (dec == 1)
        {
            bin[i] = 1;
            dec = 0;
        }
    }

    int x = 0; // count
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
