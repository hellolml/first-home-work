#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1, j = 1,sum;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			sum = i*j;
			printf("%d*%d=%d", i, j, sum);
			printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}