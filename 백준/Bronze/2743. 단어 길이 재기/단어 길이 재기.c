#include <stdio.h>

int main(void)
{
	char S[101];
	int i;

	scanf("%s", S);

	for (i = 0; ;i++)
	{
		if (S[i] == 0) break;
	}
	printf("%d", i);

	return 0;
}