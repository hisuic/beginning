#include <stdio.h>
int main(void)
{
	int n, max;
	n = max = 0;
	do{
		printf("data=");
		scanf("%d",&n);
		if(n > max)
			max = n;
	}while(n > 0);
	printf("Max data is %d\n",max);
	return 0;
}