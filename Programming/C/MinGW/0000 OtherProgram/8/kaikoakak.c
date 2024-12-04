#include<stdio.h>
int main(void)
{
	int kensu = 0,goukei = 0,tensu,heikin;
	int max = 0,min = 99999;
	int a;

	do{
	
	printf("Please input score.\n");
	scanf("%d",&tensu);

	goukei = goukei + tensu;

	kensu++;
	
	if(tensu >= max){
		max = tensu;
	}

	if(tensu <= min){
		min = tensu;
	}

	}while(goukei <= 999);

	heikin = goukei / kensu;

	printf(" Total score is %d. Average is %d.\n Max score is %d. Min score is %d. \n",goukei,heikin,max,min);

	return 0;
}