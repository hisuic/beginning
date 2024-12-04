#include<stdio.h>
int main()
{
	int kazu,i;
	float tate, yoko,menseki = 0,goukei = 0;

	printf("部屋の数はいくつですか？\n");
	scanf("%d",&kazu);

	for (i = 0; i < kazu; i++) {
		printf("縦の長さを入力してください : ");
		scanf("%f", &tate);
		printf("横の長さを入力してください : ");
		scanf("%f",&yoko);

		menseki = tate * yoko;
		goukei = goukei + menseki;
	}
	printf("%dこの部屋の合計面積は%f平方メートルです。\n", kazu, goukei);
	return 0;
}