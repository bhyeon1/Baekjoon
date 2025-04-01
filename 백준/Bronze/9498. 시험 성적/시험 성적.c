#include <stdio.h>

int main(void)
{
	int score;
	char grade[12] = { 'F','F','F','F','F','F','D','C','B','A', 'A' };
	scanf("%d", &score);

	printf("%c", grade[score / 10]);

	return 0;
}