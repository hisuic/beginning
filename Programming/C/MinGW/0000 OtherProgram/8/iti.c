#include<stdio.h>
#include<string.h>
int main(void)
{
	int max_sincho = 0;
	int a;
	int i;
	char namae[30];
	char max_namae[30];

	for(i = 0;i < 5;i++){

		printf("Please input name.\n");
		scanf("%s",namae);

		printf("Please input high.\n");
		scanf("%d",&a);

		if(a > max_sincho){
			max_sincho = a;

		strcpy(max_namae,namae);

		}
	}
	
	printf("The highest is %s and his height is %d.\n",max_namae,max_sincho);

	return 0;
}