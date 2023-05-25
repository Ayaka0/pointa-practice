#include<stdio.h>
#include<stdlib.h>

int global_variable;
static int file_static_variable;

void func1(void)
{
	int func1_variable;
	static int local_static_variable;

	printf("&func1_variable..%p\n", (void*)&func1_variable);
	printf("&local_static_variable..%p\n", (void*)&local_static_variable);
}

void func2(void)
{
	int func2_variable;
	printf("&func2_variable..%p\n", (void*)&func2_variable);
}

int main(void)
{
	int *p;
	/*�֐��ւ̃|�C���^*/
	printf("func1..%p\n", (void*)func1);
	printf("func2..%p\n", (void*)func2);

	/*�����񃊃e�����̃A�h���X�̕\��*/
	printf("strinng literal..%p\n", (void*)"abc");

	/*�O���[�o���ϐ��̃A�h���X�\��*/
	printf("&global_variable..%p\n", (void*)&global_variable);

	/*�t�@�C����static�ϐ��̃A�h���X�\��*/
	printf("&file_static_variable..%p\n", (void*)&file_static_variable);

	/*���[�J���ϐ��̕\��*/
	func1();
	func2();

	/*malloc�ɂ��m�ۂ����̈�̃A�h���X*/
	p = malloc(sizeof(int));
	printf("malloc address..%p\n", (void*)p);

	return 0;


}