#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;
    printf("Input 2 numbers:");
    scanf("%lf %lf", &a, &b);
    printf("%.4lf%%", ((a / b) * 100));
    return 0;
}
