#include<stdio.h>
int main(void)
{
	int max = 0,min = 999;
	int a;
	int goukei = 0,i = 1;
	float average;

	for(i == 0;i <11;i++){
		printf("Please input number.\n");
		scanf("%d",&a);

		goukei = goukei + a;
		
		if(a > max){
			max = a;
		}if(a < min){
			min  =a;
		}

	}
	average = goukei / 10.0;
	
	printf("Total is %d. Average is %f.\nMax score is %d. Min score is %d.\n",goukei,average,max,min);

	return 0;
}