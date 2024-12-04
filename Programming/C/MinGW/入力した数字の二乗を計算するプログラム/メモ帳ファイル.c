#include <stdio.h>
int main(void)
{
	float a, jyou;

	printf("2乗したい数字を入力してください");
	scanf("%f", &a);

	jyou = a * a;

	printf("2乗した数は%fである\n", jyou);

	return 0;
}