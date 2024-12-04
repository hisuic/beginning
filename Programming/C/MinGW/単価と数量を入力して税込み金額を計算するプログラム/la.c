#include<stdio.h>
int main(void)
{
	int tanka,suryo,total,intax;
	
	printf("Please input price.\n");
	scanf("%d",&tanka);

	printf("Please input quantity.\n");
	scanf("%d",&suryo);

	total = tanka * suryo;
	intax = (total * 110) / 100;

	printf("Intax price is %d.\n",intax);
}