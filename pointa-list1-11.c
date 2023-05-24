/*#include <stdio.h>

int main(void)
{
	int size1, size2, size3;

	printf("�����l��3���͂��Ă�������\n");
	scanf_s("%d%d%d", &size1, &size2, &size3);

	//�ϒ��z��̐錾
	int array1[size1];
	int array2[size2][size3];

	//�ϒ��z��ɓK���ɒl��������
	int i;
	for (i = 0; i < size1; i++) {
		array1[i] = i;
	}

	int j;
	for (i = 0; i < size2; i++) {
		for (j = 0; j < size3; j++) {
			array2[i][j] = i * size3 + j;
		}
	}

	//������ꂽ�l��\������
	for (i = 0; i < size1; i++) {
		printf("array1[%d]..%d\n", i, array1[i]);
	}
	for (i = 0; i < size2; i++) {
		for (j = 0; j < size3; j++) {
			printf("\t%d", array2[i][j]);
		}
		printf("\n");
	}
	printf("sizeof(array1)..%z\n", sizeof(array1));
	printf("sizeof(array2)..%z\n", sizeof(array2));

	return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size1, size2, size3;

    printf("�����l��3���͂��Ă�������\n");
    scanf_s("%d%d%d", &size1, &size2, &size3);

    // ���I���������蓖�Ă��g�p���ĉϒ��z����쐬
    int* array1 = (int*)malloc(size1 * sizeof(int));
    int** array2 = (int**)malloc(size2 * sizeof(int*));
    for (int i = 0; i < size2; i++) {
        array2[i] = (int*)malloc(size3 * sizeof(int));
    }

    // �l�̑��
    for (int i = 0; i < size1; i++) {
        array1[i] = i;
    }
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size3; j++) {
            array2[i][j] = i * size3 + j;
        }
    }

    // ������ꂽ�l�̕\��
    for (int i = 0; i < size1; i++) {
        printf("array1[%d]..%d\n", i, array1[i]);
    }
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size3; j++) {
            printf("\t%d", array2[i][j]);
        }
        printf("\n");
    }

    // �������̉��
    free(array1);
    for (int i = 0; i < size2; i++) {
        free(array2[i]);
    }
    free(array2);

    return 0;
}
