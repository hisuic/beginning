#include<stdio.h>
int main(void)
{
	int mokuhyou,chokin,getu,nen;
	int goukei = 0,kikan = 0;

	printf("Please imput Mokuhyou kingaku.\n");
	scanf("%d",&mokuhyou);

	printf("Please imput Gekkan chokin kingaku.\n");
	scanf("%d",&chokin);

	while(goukei > mokuhyou){
		goukei = goukei += chokin;
		kikan = kikan += 1;

	}

	nen = kikan / 12;
	getu = kikan % 12;

	printf("%d year %d month.\n",nen,getu);

	return 0;
}