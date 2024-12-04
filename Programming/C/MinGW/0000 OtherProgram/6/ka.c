#include<stdio.h>
int main(void)
{
	int kubun,ninzu,gokei;
	
	printf("Please choice the case.\n 1 Fee is 800.\n 2 Fee is 1000.\n 3 Fee is 1500.\n");
	scanf("%d",&kubun);
	printf("Please input number.\n");
	scanf("%d",&ninzu);

	switch (kubun)
	{
		case 1:
			kubun = 800;
			break;
		case 2:
			kubun = 1000;
			break;
		case 3:
			kubun = 1500;
			break;
		default:
			break;
	}

	gokei = kubun * ninzu;

	printf("The fee is %d.\n",gokei);

	return 0;
}