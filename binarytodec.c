#include<stdio.h>
#include<string.h>
#include<math.h>
#define LIMIT 10

int main()
{
    int bin;

    printf("Enter a binary number to be converted to decimal: ");
    scanf("%d", &bin);

    char binS[LIMIT];
    int num = 0;
    int add = 0;
    int total = 0;

    sprintf(binS,"%d", bin); // copy int to str

    printf("%s\n", binS);

    // loop through binS compute decimal
    int x = 0;
    for (int i = strlen(binS); i > 0; i--)
    {
        num = binS[x] - '0';
        add = num * (pow(2, i-1));
        total += add;
        x++;
    }

    printf("%d\n", total);
}
