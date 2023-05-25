#include<stdio.h>

/*ˆø”‚É1.0‚ğ‘«‚µ‚Ä•\¦‚·‚éŠÖ”*/
void func1(double d)
{
	printf("func1: d + 1.0 = %f\n", d + 1.0);
}

/*ˆø”‚É2.0‚ğ‘«‚µ‚Ä•\¦‚·‚éŠÖ”*/
void func2(double d)
{
	printf("func2: d + 2.0 = %f\n", d + 2.0);
}

int main(void)
{
	void (*func_p)(double);
	func_p = func1;
	func_p(1.0);

	func_p = func2;
	func_p(2.0);

	return 0;
}