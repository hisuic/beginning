#include<stdio.h>
int main(void)
{
	int kokugo;
	int syakai;
	int rika;
	int goukei;
	int heikin;

	printf("Please input Kokugo.\n");
	scanf("%d",&kokugo);
	printf("Please input Syakai.\n");
	scanf("%d",&syakai);
	printf("Please input Rika.\n");
	scanf("%d",&rika);

	goukei = kokugo + syakai + rika;
	heikin = (kokugo + syakai + rika) / 3;

	printf("Total is %d.\n",goukei);
	printf("Avarage is %d.\n",heikin);

	return 0;
}