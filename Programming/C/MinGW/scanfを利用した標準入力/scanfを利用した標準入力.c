/*scanfを利用した標準入力*/
#include <stdio.h>
int main (void)
{
	int koku, su, ei, goukei;

	printf("What score is your Japanese?");
	scanf("&d",&koku);

	printf("What score is your Math?");
	scanf("%d",&su);

	printf("What score is your English?");
	scanf("%d",&ei);

	goukei = koku + su + ei ;

	printf("Your total score is %d¥n",goukei);

	return 0;
}