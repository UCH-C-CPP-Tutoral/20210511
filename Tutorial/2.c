#include <stdio.h>
#include <stdlib.h>

int main()
{
	double r, volume, surface, pi = 3.14159;
	printf("r?");
	scanf("%lf", &r);
	volume = 4. / 3. * (pi * r * r * r);
	surface = 4 * pi * r * r;
	printf("Volume:\t%.2lf\nSurface:%.2lf", volume, surface);
	return 0;
}
