#include<stdio.h>
int main(void)
{
	int a;
	int goukei = 0,i = 1;
	float average;

	for(i == 0;i <11;i++){
		printf("Please input number.\n");
		scanf("%d",&a);

		goukei = goukei + a;

	}
	average = goukei / 10.0;
	
	printf("Total is %d. Average is %f.\n",goukei,average);

	return 0;
}