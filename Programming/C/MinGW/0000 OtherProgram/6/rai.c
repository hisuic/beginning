#include<stdio.h>
int main(void)
{
	int kubun,tanka,suryo,gokei,ritu;

	printf("Please choice kubun.\n 1 save 5% \n 2 save 10% \n 3 save 15% \n 4 Other \n");
	scanf("%d",&kubun);

	printf("Please input tanka.\n");
	scanf("%d",tanka);

	printf("Please input suryo.\n");
	scanf("%d",&suryo);

	gokei = tanka * suryo;

	switch (kubun)
	{
		case (1):
			ritu = (gokei * 95) / 100;
			break;
		case (2):
			ritu = (gokei * 90) / 100;
			break;
		case (3):
			ritu = (gokei * 85) / 100;
			break;
		case (4):
			ritu = gokei;
			break;
		default:
			break;
	}
	printf("Price is %d.\n",ritu);

	return 0;
}