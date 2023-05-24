//�^����ꂽ���͂���P���ǂݎ��A�����<<>>�ň͂�ŕ\������v���O���~���O
#include<stdio.h> //���o�͊֘A�̋@�\
#include<ctype.h> //�����̕��ނ�ϊ�
#include<stdlib.h> //��ʓI�ȃ��[�e�B���e�B�֐�

//�v���g�^�C�v�錾 �^����ꂽ�t�@�C������P���ǂݎ��Abuf�Ɋi�[����
int get_word(char* buf, int buf_size, FILE* fp)
{
	int len; //�P��̒���
	int ch; //�������ꎞ�I�Ɋi�[����ׂ̕ϐ�

	/*�󔒕����̓ǂݔ�΂�*/
	while ((ch = getc(fp) != EOF && !isalnum(ch))); //get(fp)�̓t�@�C������1�������ǂݎ��A���̌��ʂ�ch�ɑ������Bisalnum(ch)��ch���p�������ǂ�������

	if (ch == EOF) //����ch��EOF(�t�@�C���̏I�[)�Ȃ�AEOF��Ԃ��Ċ֐��I��
		return EOF;

	/*�����ŁAch�ɂ́A�P��̍ŏ��̕������i�[����Ă���*/
	len = 0;
	do {
		buf[len] = ch; //buf[len]��ch�������Alen���C���N�������g����Blen��bus_size�ȏ�ɂȂ�����A�P�ꂪ��������ƃG���[���b�Z�[�W�o�͂��A�v���O�����I��
		len++;
		if (len >= buf_size) {
			/*�P�ꂪ��������̂ŃG���[*/
			fprintf(stderr, "word too long.\n");
			exit(1);
		}
	} while ((ch = getc(fp)) != EOF && isalnum(ch));

	buf[len] = '\0'; //�k��������ǉ����āA������̏I�[������

	return len; //�P��̒�����Ԃ��āAget_word�֐��I��
}

int main(void)
{
	char buf[256];

	while (get_word(buf, 256, stdin) != EOF) {
		printf("<<%s>>\n", buf);
	}

	return 0;
}