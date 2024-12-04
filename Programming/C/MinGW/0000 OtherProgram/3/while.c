#include<stdio.h>
int main(void)
{
	int a;
	int b = 1;
	int goukei = 0;
	printf("Please input number.");
	scanf("%d",&a);
	do{
		goukei += b;
		b += 1;
		printf("Total is %d.\n",goukei);
	}while(b <= a);
	return 0;
}