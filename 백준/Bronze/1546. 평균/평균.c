#include <stdio.h>

int main(void)
{
	int i, N;
	int max = 0;
	float sum = 0;
	int subject[1000];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &subject[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (max < subject[i])
		{
			max = subject[i];
		}
		sum += subject[i];
	}
	
	float avg;
	avg = ((sum / (float)max) * 100) / (float)N;

	printf("%f", avg);
	

	return 0;
}