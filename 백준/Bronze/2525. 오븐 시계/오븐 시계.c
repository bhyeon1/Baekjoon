#include <stdio.h>

int main(void)
{
	int A, B;
	int current_time;
	int cooking_time;
	int fin_A, fin_B;
	scanf("%d %d", &A, &B);
	scanf(" %d", &cooking_time);

	current_time = A * 60 + B + cooking_time; // 분단위로 변경

	for (; current_time >= 24 * 60;)
	{
		current_time -= 24 * 60;
	}

	fin_A = current_time / 60;
	fin_B = current_time % 60;

	printf("%d %d", fin_A, fin_B);

	return 0;
}