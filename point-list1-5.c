#include<stdio.h>

int main(void)
{
	int hoge;
	int *hoge_p;

	/*hoge_p��hoge�ւ̃|�C���^��ݒ�*/
	hoge_p = &hoge;

	/*hoge_p�̒l��\��*/
	printf("hoge_p..%p\n", (void*)hoge_p);

	/*hoge_p�ɂP���Z*/
	hoge_p++;

	/*hoge_p�̒l��\��*/
	printf("hoge_p..%p\n", (void*)hoge_p);

	/*hoge_p�ɂR���Z�����l��\��*/
	printf("hoge_p..%p\n", (void*)(hoge_p + 3));

	return 0;
}