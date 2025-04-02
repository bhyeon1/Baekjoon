#include <stdio.h>

int main()
{
	int a, b;
	for (;;) {
		if (scanf("%d %d", &a, &b) == EOF) break;

		printf("%d\n", a + b);
	}

	return 0;
}