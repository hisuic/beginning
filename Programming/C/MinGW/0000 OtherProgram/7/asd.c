#include<stdio.h>

int main(void)
{
	int magic;
	int guess;
	int i;

	magic = 1325;
	guess = 0;

	for(i = 0;i < 10 && guess != magic;i++){
	printf("Please imput number.\n");
	scanf("%d",&guess);

		if (guess == magic){
			printf("Succeed!!");
			printf("%d is a magic number.\n",magic);
		}
		else{
			printf("No");
			if (guess == magic)
				printf("More little number.\n");
			else
				printf("More big number.\n");
		}
	}
	return 0;
}