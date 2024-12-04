/*scanfを利用した掛け算*/
#include <stdio.h>
int main (void)
{
	int a,  b, seki;

	printf("Find the area of the retangle.What is the horizontal length?");
	scanf("%d",&a);

	printf("What is the vertical length?");
	scanf("%d",&b);

	seki = a * b;

	printf("The area of the rectangle is %d square centimeters\n", seki);

	return 0;
}