#include <stdio.h>

int main()
{
	int x;
	printf("Print number\n");

	scanf_s("%i", &x);
	if (x > 0)
	{
		x *= 2;
		printf("\n%i", x);
	}
	else if (x < 0)
	{
		x -= 3;
		printf("%i\n", x);
	}
	else if (x == 0)
	{
		x = 10;
		printf("%i\n", x);
	}

	return 0;
}