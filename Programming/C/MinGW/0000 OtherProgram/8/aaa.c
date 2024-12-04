#include<stdio.h>
int main(void)
{
	int mokuhyou,chokin,getu,nen;

	printf("Please imput Mokuhyou kingaku.\n");
	scanf("%d",&mokuhyou);

	printf("Please imput Gekkan chokin kingaku.\n");
	scanf("%d",&chokin);

	nen = (mokuhyou / chokin) / 12;
	getu = (mokuhyou / chokin) % 12;

	printf("%d year %d month.\n",nen,getu);

	return 0;
}