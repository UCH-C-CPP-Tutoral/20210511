#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;

    scanf("%d", &input);

    for (int output = 0; output <= 500; output += input)
    {
        printf("%d ", output);
    }
    printf("\n");

    system("pause > nul");
    return 0;
}
