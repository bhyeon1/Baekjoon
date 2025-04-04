#include <stdio.h>

int main(void)
{
	char S[101];
	char j;
	int i;
	int detect = 0;
	int alphabet['z' - 'a' + 1];

	for (i = 0; i < 'z' - 'a' + 1; i++)
	{
		alphabet[i] = -1;
	}

	scanf("%s", &S);

	for (i = 0; S[i] != 0; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (S[i] == j)
			{
				if (alphabet[j - 'a'] == -1)
				alphabet[j - 'a'] = detect;
				detect++;
			}
		}

	}

	for (i = 0; i < 'z' - 'a' + 1; i++)
	{
		printf("%d ", alphabet[i]);
	}

	return 0;
}