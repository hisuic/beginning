#include<stdio.h>
int main(void)
{
	int a;
	int total = 0;
	do{
		printf("Please input number.");
		scanf("%d",&a);
		total += a;
		printf("Total is %d.\n",total);
	}while(a != 0);
	return 0;
}