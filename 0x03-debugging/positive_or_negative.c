#include <stdio.h>

/**
 * positive_or_negative - determines if num is +, - or 0
 * @i:The num tha is checked
 */

void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is postive\n", i);
}
