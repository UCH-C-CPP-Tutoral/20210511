#include <stdio.h>
main()
{
    int n, c = 0, p, i = 1;
    scanf("%d", &n);
    p = n;
    while (p - i >= 0)
    {
        p = p - i;
        c++;
        i += 2;
    }
    printf("%d", c);
    system("pause > nul");
    return 0;
}
