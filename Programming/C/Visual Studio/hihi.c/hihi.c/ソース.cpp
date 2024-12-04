#pragma warning(disable:4996)
#include<stdio.h>
int main(void)
{
	int a;
	int b = 1;
	int goukei = 0;
	printf("Please input number.");
	scanf("%d", &a);
	do {
		goukei += b;
		b++;
	} while (b == a);
	printf("Total is %d.\n", goukei);
	return 0;
}