#include<stdio.h>

void adjust_point(int* n)
{
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

int main(void)
{
	int point;

	printf("�e�X�g�̓_���F");
	scanf("%d", &point);

	adjust_point(&point);

	printf("�_����%d�_�ł��B\n", point);

	return 0;
}