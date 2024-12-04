#include<stdio.h>

int get_sqr(void);

int main(void)	
	
{
	int sqr;

	sqr = get_sqr();
	printf("2jyou : %d",sqr);

return 0;
}

int get_sqr(void)

{
	int num;

	printf("Please imput number : ");
	scanf("%d",&num);
	return num * num; /* 数値を２乗する */
}