#include<stdio.h>
int main(void)
{
	int a;
	printf("How old are you?\n");
	scanf("%d",&a);
	if(a >=20){
		printf("You are adult.");
	}else{
		printf("You are not adult.");
	}
	return 0;
}