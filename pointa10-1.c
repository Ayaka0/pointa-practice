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

	puts("�Q�̐�������͂���");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);
	
	swap(&a, &b);

	puts("�����̒l���������܂���");
	printf("����A��%d�ł��B\n", a);
	printf("����B��%d�ł��B\n", b);

	return 0;
}