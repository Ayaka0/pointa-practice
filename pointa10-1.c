#include<stdio.h>

void set999(int* p)
{
	*p = 999;
}

int main(void)
{
	int x = 123;
	int y = 456;
	int sw;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	printf("ÏX·éÌÍy0cx / 1cyz = ");
	scanf("%d", &sw);

	int *p;

	if (sw == 0)
		set999(&x); //xÌÏXðË
	else 
		set999(&y); //yÌÏXðË

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}