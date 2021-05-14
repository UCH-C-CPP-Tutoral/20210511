#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, h2, m2, hr, mr;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    hr = h2 - h1;
    mr = m2 - m1;

    if (hr < 0)
        hr += 24;
    if (mr < 0)
    {
        hr -= 1;
        mr += 60;
    }

    if (hr == 0)
        printf("%02d min", mr);
    else if (mr == 0)
        printf("%02d hour", hr);
    else
        printf("%02d:%02d", hr, mr);

    system("pause > nul");
    return 0;
}
