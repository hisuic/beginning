#include<stdio.h>
int main(void)
{
	int i,temp[5];
	for(i = 0;i < 5;i++){
	printf("temp[%d] = ",i);
	scanf("%d",&temp[i]);
	}

	puts("----------------");

	for(i = 0;i < 5;i++){
	
	if(temp[i] %2 == 1)
	printf("%d,",temp[i]);
	}
	return 0;
}