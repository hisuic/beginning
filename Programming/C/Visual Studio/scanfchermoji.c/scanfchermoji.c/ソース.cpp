#pragma warning(disable:4996)
#include<stdio.h>
int main(void)
{
	char retu[255];
	int i = 0;
	scanf("%s", retu);
	printf("•¶Žš—ñ‚Í%s\n", retu);
	while (retu[i] != '\0') {
		printf("%c", retu[i]);
		i++;
	}
	return 0;
}