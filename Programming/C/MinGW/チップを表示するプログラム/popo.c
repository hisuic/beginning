#include<stdio.h>
#include<conio.h>

int main(void)
{
    char con;
    int count;
    int dollar;
    float chip10, chip15, chip20;

    for (count = 1; count <= 100; count++) {

        dollar = count * 100;
        chip10 = count * 1.10;
        chip15 = count * 1.15;
        chip20 = count * 1.20;

        printf("%d\tドルの時、10％のチップ金額は", dollar);
        printf("%d\t円、15％のチップ金額は", chip10);
        printf("%d\t円、20％のチップ金額は", chip15);
        printf("%d\n円です。", chip20);

        for (; ; ) {
            printf("続けますか？ はい[Y] または いいえ[N]を押してください。 :");
            con = getche();
            if(con == "Y") {
                break;
            }
         else if (con == "N") {
         break;
         }
         else {
         ;
         }
        }
        if (con == "N") {
            break;
        }
    }
    return 0;
}