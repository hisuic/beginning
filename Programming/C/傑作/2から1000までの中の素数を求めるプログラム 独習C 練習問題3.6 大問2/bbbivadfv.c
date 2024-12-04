#include<stdio.h>

int main(void)
{
	int suuji,waru,df = 0,watta = 0;
	for (suuji = 2; suuji < 1001; suuji++) {
		df = 0;
		for(waru = 1; waru <= suuji; waru++) {
			watta = suuji% waru;
			if (watta == 0) {
				df++;
			}
		}
		if(df == 2) {
			printf("%d\t",suuji);
		}
	printf(" ");
	}
	return 0;
}