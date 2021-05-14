#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int numerator, denmoinator, numgcd;
    printf("numerator?");
    scanf("%d", &numerator);
    printf("denmoinator?");
    scanf("%d", &denmoinator);

    if (denmoinator == 0)
    {
        printf("Denmoinator can't be 0");
    }
    else
    {
        numgcd = gcd(numerator, denmoinator);
        printf("Here is the case of fraction in lowest term\nNumerator:%d\nDenmoinator%d\n", (numerator / numgcd), (denmoinator / numgcd));
        return 0;
    }
}

int gcd(int numerator, int denmoinator)
{
    if (denmoinator)
        while ((numerator %= denmoinator) && (denmoinator %= numerator))
            ;
    return numerator + denmoinator;
}
