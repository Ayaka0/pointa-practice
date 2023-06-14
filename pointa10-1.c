#include<stdio.h>


void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;

	puts("‚Q‚Â‚Ì®”‚ğ“ü—Í‚¹‚æ");
	printf("®”a:"); scanf("%d", &a);
	printf("®”b:"); scanf("%d", &b);
	
	swap(&a, &b);

	puts("‚±‚ê‚ç‚Ì’l‚ğŒğŠ·‚µ‚Ü‚µ‚½");
	printf("®”A‚Í%d‚Å‚·B\n", a);
	printf("®”B‚Í%d‚Å‚·B\n", b);

	return 0;
}