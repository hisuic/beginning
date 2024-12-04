#include<stdio.h>
int getAdd(int a,int b){
	return a+b;
}

int main(void)
{
	int a = 5;
	int b = 8;
	int c = getAdd(a,b);
	printf("%d+%d=%d\n",a,b,c);

	return 0;
}