#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input = 0;
    scanf("%d", &input);
    printf("%02d:%02d:%02d", input / 3600, (input / 60) % 60, (input % 60) % 60);
    system("pause > nul");
    return 0;
}
