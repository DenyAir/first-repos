#include <stdio.h>

int main() {

	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);

	if ((a == b) && (b == c))
	{
		int x = a * 1000 + 10000;
		printf("%d", x);
	}

	else if (a == b || a == c)
	{
		printf("%d", a * 100 + 1000);
	}
	else if (b == c)
	{
		printf("%d", b * 100 + 1000);
	}
	else
	{
		int max;
		if ((a >= b) && (a >= c))
		{
			max = a;
		}

		else if ((b >= a) && (b >= c))
		{
			max = b;
		}

		else if ((c >= a) && (c >= b))
		{
			max = c;
		}
		printf("%d", max * 100);
	}

	return 0;
}