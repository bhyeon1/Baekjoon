#include <stdio.h>

int main(void)
{
	int H, M;
	int new_time;
	int new_H, new_M;
	scanf("%d %d", &H, &M);
	if (H == 0 && M < 45) H = 24;
	new_time = H * 60 + M - 45; // 분단위로 변경
	new_H = new_time / 60;
	new_M = new_time % 60;

	printf("%d %d", new_H, new_M);
	 
	return 0;
}