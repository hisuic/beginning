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

        printf("%d\t�h���̎��A10���̃`�b�v���z��", dollar);
        printf("%d\t�~�A15���̃`�b�v���z��", chip10);
        printf("%d\t�~�A20���̃`�b�v���z��", chip15);
        printf("%d\n�~�ł��B", chip20);

        for (; ; ) {
            printf("�����܂����H �͂�[Y] �܂��� ������[N]�������Ă��������B :");
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