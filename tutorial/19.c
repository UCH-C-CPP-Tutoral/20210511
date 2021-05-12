#include <stdio.h>
main()
{
	int sh, sm, eh, em, ht, mt, d;
	scanf("%d:%d", &sh, &sm);
	scanf("%d:%d", &eh, &em);
	ht = sh + eh;
	mt = sm + em;
	if (mt >= 60)
	{
		ht = ht + mt / 60;
		mt = mt % 60;
	}
	if (ht > 24)
	{
		d = ht / 24;
		ht = ht % 24;
	}
	if (d != 0)
	{
		printf("%dDay%dHour%dMinute", d, ht, mt);
	}
	else
	{
		if (ht != 0)
			printf("%dHour%dMinute", ht, mt);
		else
			printf("%dMinute", mt);
	}
	system("pause > nul");
	return 0;
}
