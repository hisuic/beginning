#include<stdio.h>
#include<string.h>

int main(void)

{
	int kensu = 0,goukei = 0;
	int uriage,heikin;
	int max = 0,min = 999;
	char tanto[60],max_tanto[60],min_tanto[60];

	do{
	
		printf("Please imput tantousya.\n");
		scanf("%s",tanto);

		printf("Please imput uriage.\n");
		scanf("%d",&uriage);

		goukei = goukei + uriage;
	
		kensu++;

		if(uriage > max){
			max = uriage;
			strcpy(max_tanto,tanto);
		}
	
		if(uriage < min){
			min = uriage;
			strcpy(min_tanto,tanto);
		}
	}while(strcmp(tanto,"end"));

	heikin = goukei / kensu;

	printf("Total is %d. Average is %d.\nMax uriage is %s and kingaku is %d.\nMin uriage is %s and kingaku is %d.\n",goukei,heikin,max_tanto,max,min_tanto,min);
	return 0;
}