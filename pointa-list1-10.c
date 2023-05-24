//与えられた入力から単語を読み取り、それを<<>>で囲んで表示するプログラミング
#include<stdio.h> //入出力関連の機能
#include<ctype.h> //文字の分類や変換
#include<stdlib.h> //一般的なユーティリティ関数

//プロトタイプ宣言 与えられたファイルから単語を読み取り、bufに格納する
int get_word(char* buf, int buf_size, FILE* fp)
{
	int len; //単語の長さ
	int ch; //文字を一時的に格納する為の変数

	/*空白文字の読み飛ばし*/
	while ((ch = getc(fp) != EOF && !isalnum(ch))); //get(fp)はファイルから1文字ずつ読み取り、その結果をchに代入する。isalnum(ch)はchが英数字かどうか判定

	if (ch == EOF) //もしchがEOF(ファイルの終端)なら、EOFを返して関数終了
		return EOF;

	/*ここで、chには、単語の最初の文字が格納されている*/
	len = 0;
	do {
		buf[len] = ch; //buf[len]にchを代入し、lenをインクリメントする。lenがbus_size以上になったら、単語が長すぎるとエラーメッセージ出力し、プログラム終了
		len++;
		if (len >= buf_size) {
			/*単語が長すぎるのでエラー*/
			fprintf(stderr, "word too long.\n");
			exit(1);
		}
	} while ((ch = getc(fp)) != EOF && isalnum(ch));

	buf[len] = '\0'; //ヌル文字を追加して、文字列の終端を示す

	return len; //単語の長さを返して、get_word関数終了
}

int main(void)
{
	char buf[256];

	while (get_word(buf, 256, stdin) != EOF) {
		printf("<<%s>>\n", buf);
	}

	return 0;
}