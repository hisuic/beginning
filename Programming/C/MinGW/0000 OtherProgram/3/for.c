#include<stdio.h>
int  main(void)
{
	int a;
	int b = 1;
	int c = 1;
	int goukei = 0;
	printf("Please input number.\n");
	scanf("%d",&a);
	for(b==1;b<=a;b+=1){
		goukei += c;
		c += 1;
		printf("Total is %d.\n",goukei);
	}
	return 0;
}