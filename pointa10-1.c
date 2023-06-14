#include<stdio.h>

//y�N�͉[�N��
int is_leap(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 = 0;
}

//y�Nm���̓���
int days_of_month(int y, int m)
{
	int mdays[][12] = {
		{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, //���N
		{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, //�[�N
	};
	return mdays[is_leap(y)][m - 1];
}

//*y�N*m��*d����O���̓��t�ɍX�V
void decrement_date(int* y, int* m, int* d) 
{
	if (*d > 1)
		--* d;
	else {
		if (-- * m < 1) {
			--* y;
			*m = 12;
		}
		*d = days_of_month(*y, *m);
	}
}

//*y�N*m��*d���𗂓��̓��t�ɍX�V
void increment_data(int* y, int* m, int* d)
{
	if (*d < days_of_month(*y, *m))
		++* d;
	else {
		if (++ * m > 12) {
			++* y;
			*m = 1;
		}
		*d = 1;
	}
}


int main(void)
{
	int n;
	int y, m, d;

	puts("���t����͂���");
	printf("�N�F"); scanf("%d", &y);
	printf("���F"); scanf("%d", &m);
	printf("���F"); scanf("%d", &d);

	printf("�����߂��܂����F"); scanf("%d", &n);


	int i;
	for (i = 0; i < n; i++)
		decrement_date(&y, &m, &d);

	printf("%d�N%d��%d���ɂȂ�܂����B\n", y, m, d);

	printf("�����i�߂܂����F"); scanf("%d", &n);
	for (i = 0; i < n; i++)
		increment_date(&y, &m, &d);

	printf("%d�N&d��%d���ɂȂ�܂����B\n", y, m, d);


	return 0;
}