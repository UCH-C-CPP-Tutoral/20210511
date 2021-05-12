#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cost, one, five, ten;
	printf("How much do you want to exchange:");
	scanf("%d", &cost);
	ten = cost / 10;
	five = (cost % 10) / 5;
	one = (cost % 10) % 5;
	printf("$10:\t%d\n$5:\t%d\n$1:\t%d", ten, five, one);
	return 0;
}
