#include <stdio.h>
int main(void)
{
	float a, jyou;

	printf("Please enter the number you want to square");
	scanf("%f", &a);

	jyou = a * a;

	printf("The squared number is %f\n", jyou);

	return 0;
}