#include<stdio.h>

int convert(void);

int main(void)
{
	float kingaku;

	kingaku = convert();
	printf("Canada kingaku : %f\n",kingaku);

	return 0;
}

int convert(void)
{
	float moto,mannnaka;

	printf("Please imput Japan kingaku :");
	scanf("%f",&moto);

	mannnaka = moto / 100;
	return mannnaka * 80;
}