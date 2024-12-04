#include<stdio.h>

char kaiko(int);

struct seiseki {
	int tensu;
	char rank;
};

int main(void)
{
	struct seiseki kofu;
	printf("Please input total point. 0~100 \n");
	scanf("%d",&kofu.tensu);

	printf("Your rank is %c.\n",kaiko(kofu.tensu));

	return 0;
}

char kaiko(int tensu){
	char rank;

	if(tensu >= 80){
		rank = 'A';
	}else if(tensu >= 60){
		rank = 'B';
	}else{
		rank = 'C';
	}
	return rank;
}