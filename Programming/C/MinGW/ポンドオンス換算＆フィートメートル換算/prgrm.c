#include<stdio.h>

void input(char* str)
{
	print("Type a string : ");
	scanf(%[^\n]);
}

void cound(char* str)
{
	for(char c='A'; c <='z'; i++){
		int count=0;
		for(int i=0; ; i++){
			if(str[i] == c) count++;
			if(str[i] == 0) break;
		}

		if(count)
			printf(" %c: %d\n", c, count);
	}
}

int main(void)
{
	char str[100];

	input(str);
	count(str);
	return 0;
}
