#include<stdio.h>
int main (void)
{
	int tensu1,tensu2;
	char namae1[255],namae2[255];

	printf("Please input your name.\n");
	scanf("%s",&namae1);
	printf("Please input your score.\n");
	scanf("%d",&tensu1);
	printf("Please input your name.\n");
	scanf("%s",&namae2);
	printf("Please input your name.\n");
	scanf("%d",&tensu2);

	if (tensu1 > tensu2){
		printf("%s's score is higher than %s.\n",namae1,namae2);
	}else{
		printf("%s's score is higher than %s.\n",namae2,namae1);
	}
	return 0;
}