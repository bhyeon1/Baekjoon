#include <stdio.h>

int main(void)
{
	int total;
	int sum = 0;
	int type;
	int price[100], count[100];
	scanf("%d", &total);
	scanf("%d", &type);
	int i;
	for (i = 0; i < type; i++)
	{
		scanf("%d %d", &price[i], &count[i]);
	}
	for (i = 0; i < type; i++)
	{
		sum += price[i] * count[i];
	}

	if (total == sum) printf("Yes");
	else printf("No");

	return 0;
}