#include<stdio.h>

float taijyu();

int main(void)
{
	printf("Weight : %f",taijyu());
	return 0;
}

float taijyu()
{
	float moto,naka;
	printf("Please imput your weight :");
	scanf("%f",&moto);
	naka = moto / 100.0;
	return naka * 17.0;
}