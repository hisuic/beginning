#include<stdio.h>

char getHyouka(int);//関数プロトタイプの宣言
char* getKamoku(int);//関数プロトタイプの宣言

struct seiseki {//成績を表示する構造体
	char cls;//クラス名（文字）
	int no;//出席番号
	char *name;//名前
	int tokuten[6];//国語、数学、理科、社会、英語、合計を格納
	char rank;//評価 400点以上 A 300点以上 B 200点以上 C 100点以上 D 100点未満 E
};

int main (int argc, const char * argv[])
{
	struct seiseki takepon;
	printf("Please input your class.\t");
	scanf("%c",&takepon.cls);
	printf("Please input your number.\t");
	scanf("%d",&takepon.no);
	printf("Please input your name.\t");
	scanf("%s",&takepon.name);
	for(int i=0;i<5;i++){
	char *kamoku=getKamoku(i);
	printf("Please input %s.\t",kamoku);
	scanf("%d",&takepon.tokuten[i]);
	takepon.tokuten[5]+=takepon.tokuten[i];
	}
	printf("Class:%c\t Number:%d\t Name:%s\n",takepon.cls,takepon.no,&takepon.name);
	for(int i=0;i<5;i++){
		char *kamoku=getKamoku(i);
		printf("%s:%d\t",kamoku,takepon.tokuten[i]);
	}
	printf("Total is %d\t,takepon.tokuten[5]");
	printf("Evaluation is %c\n",getHyouka(takepon.tokuten[5]));
	return 0;
}

//科目名を返す関数
char* getKamoku(int i){
	char *kamoku;
	switch (i) {
		case 0:
			kamoku="Kokugo";
			break;
		case 1:
			kamoku="Sugaku";
			break;
		case 2:
			kamoku="Rika";
			break;
		case 3:
			kamoku="Syakai";
			break;
		case 4:
			kamoku="Eigo";
			break;
		default:
			break;
	}
	return kamoku;
}

//評価を返す関数
char getHyouka(int tokuten){
	char rank;
	if(tokuten >= 400){
		rank = 'A';
	}else if(tokuten >= 300){
		rank = 'B';
	}else if(tokuten >= 200){
		rank = 'C';
	}else if(tokuten >= 100){
		rank = 'D';
	}else{
		rank = 'E';
	}
	return rank;
}