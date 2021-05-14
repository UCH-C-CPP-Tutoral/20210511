#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a1, a2, b1, b2, x, y;
    printf("Input location of point A(Formate is 0,0):\n");
    scanf("%lf,%lf", &a1, &a2);
    printf("Input location of point B(Formate is 0,0):\n");
    scanf("%lf,%lf", &b1, &b2);
    x = b1 - a1;
    y = b2 - a2;
    doslope(x, y);
    dodistance(x, y);
    return 0;
}

doslope(double x, double y)
{
    printf("%.2lf\n", sqrt((x * x) + (y * y)));
    return 0;
}

dodistance(double x, double y)
{
    printf("%.2lf\n", y / x);
    return 0;
}
