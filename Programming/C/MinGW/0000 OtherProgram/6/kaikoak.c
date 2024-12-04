#include<stdio.h>
int main(void)
{
	int seco,jikan,fun1,fun2,byou;
	
	
	printf("Please input second time.\n");
	scanf("%d",&seco);

	fun1 = seco / 60; //60
	byou = seco % 60; //0
	jikan = fun1 / 60; //1
	fun2 = fun1 % 60; //0

	printf("%ds = %dh,%dm,%ds.\n",seco,jikan,fun2,byou);
	return 0;
}