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

	printf("�ύX����̂́y0�cx / 1�cy�z = ");
	scanf("%d", &sw);

	int *p;

	if (sw == 0)
		set999(&x); //x�̕ύX���˗�
	else 
		set999(&y); //y�̕ύX���˗�

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}