#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    printf("x?");
    scanf("%d", &x);
    printf("y?");
    scanf("%d", &y);
    double z = ((pow(x, 3) * y) - (4 * (pow(x, 2) * y + pow(y, 3)))) / sqrt((x * y - 1));
    printf("x:%d\ny:%d\nz:%lf\n", x, y, z);
    return 0;
}
