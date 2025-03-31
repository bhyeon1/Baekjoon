#include <stdio.h>

int main(void)
{
	int A, B;
	int b0, b1, b2;
	scanf("%d", &A);
	scanf(" %d", &B);

	b0 = B % 10;
	b1 = (B / 10) % 10;
	b2 = B / 100;

	printf("%d\n", A * b0);
	printf("%d\n", A * b1);
	printf("%d\n", A * b2);
	printf("%d\n", A * B);

	return 0;
}