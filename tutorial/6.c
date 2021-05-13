#include <stdio.h>
#include <stdlib.h>
int main()
{
    for (int asciicode = 40; asciicode < 128; asciicode++)
    {
        printf("ASCII CODE %d is:\t%c\n", asciicode, asciicode);
    }
    return 0;
}
