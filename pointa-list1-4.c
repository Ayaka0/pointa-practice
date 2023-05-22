#include<stdio.h>

int main(void)
{
	int hoge = 5;
	int piyo = 10;
	int* hoge_p;

	/*それぞれの変数のアドレスを表示する*/
	printf("&hoge..%p\n", (void*)&hoge);
	printf("&piyo..%p\n", (void*)&piyo);
	printf("&hoge_p..%p\n", (void*)&hoge_p);

	/*ポインタ変数hoge_pにhogeのアドレスを代入するする*/
	hoge_p = &hoge;
	printf("hoge_p..%p\n", (void*)hoge_p);

	/*hoge_pを経由してhogeの値を表示する*/
	printf("*hoge_p..%d\n", *hoge_p);

	/*hoge_pを経由してhogeの値を変更する*/
	*hoge_p = 10;
	printf("hoge..%d\n", hoge);

	return 0;
}