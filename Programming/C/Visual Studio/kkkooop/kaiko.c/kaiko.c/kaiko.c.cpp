#pragma warinig(disable:4996)
#include<stdio.h>

int main(void)
{
	int motosu, nazosu, yosou, kari = 0, kaisu = 0;

	printf("数当てゲーム！！\n1から100までの中で数字を選んで入力してください。 : ");
	scanf("%d", &motosu);

	if (1 <= motosu <= 10) {
		nazosu = 5;
	}
	else if (11 <= motosu <= 20) {
		nazosu = 10;
	}
	else if (21 <= motosu <= 30) {
		nazosu = 8;
	}
	else if (31 <= motosu <= 40) {
		nazosu = 4;
	}
	else if (41 <= motosu <= 50) {
		nazosu = 1;
	}
	else if (51 <= motosu <= 60) {
		nazosu = 6;
	}
	else if (61 <= motosu <= 70) {
		nazosu = 2;
	}
	else if (71 <= motosu <= 80) {
		nazosu = 3;
	}
	else if (81 <= motosu <= 90) {
		nazosu = 9;
	}
	else if (91 <= motosu <= 100) {
		nazosu = 7;
	}

	do {
		printf("当たりの数は1から10までのどれかです！\n当たりだと思う数字を入力してください。\nチャンスは10回です。\n");
		scanf("%d",&yosou);

		kaisu++;
		if (kaisu >= 10) {
			kari + 5;
		}

		if (yosou == nazosu) {
			printf("！！当たり！！");
			kari + 5;
		}
		else if(yosou > nazosu){
			printf("当たりの数字はもう少し小さいです。\n");
		}
		else {
			printf("当たりの数字はもう少し大きいです。\n");
		}
	} while (kari == 0);
	
	printf("これで終わりです！\n");

		return 0;
}