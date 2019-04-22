#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=0,b=0;
	printf("100-200间的素数为:");
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b <= a - 1; b++)
		{
			if (a%b == 0) break;
		}
		if (a == b)
			printf("%d\t", b);
	}
	system("pause");
	return 0;
}