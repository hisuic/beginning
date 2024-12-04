#include<stdio.h>
int main()
{
	int kodomo;
	int otona;
	int gokei;

	printf("Please input child number.\n");
	scanf("%d",&kodomo);
	printf("Please input adult number.\n");
	scanf("%d",&otona);

	gokei = (kodomo * 800) + (otona * 1500);
	printf("Total price is %d.",gokei);

	return 0;
}