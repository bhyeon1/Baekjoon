#include <stdio.h>

int main(void)
{
	char S[1000];
	int i, j, T;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%s", S);
		for (j = 0; ; j++)
		{
			if (S[j] == 0) break;
		}
		printf("%c", S[0]);
		printf("%c\n", S[j-1]);
	}

	return 0;
}