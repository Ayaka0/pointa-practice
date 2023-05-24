/*#include <stdio.h>

int main(void)
{
	int size1, size2, size3;

	printf("整数値を3つ入力してください\n");
	scanf_s("%d%d%d", &size1, &size2, &size3);

	//可変長配列の宣言
	int array1[size1];
	int array2[size2][size3];

	//可変長配列に適当に値を代入する
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

	//代入された値を表示する
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

    printf("整数値を3つ入力してください\n");
    scanf_s("%d%d%d", &size1, &size2, &size3);

    // 動的メモリ割り当てを使用して可変長配列を作成
    int* array1 = (int*)malloc(size1 * sizeof(int));
    int** array2 = (int**)malloc(size2 * sizeof(int*));
    for (int i = 0; i < size2; i++) {
        array2[i] = (int*)malloc(size3 * sizeof(int));
    }

    // 値の代入
    for (int i = 0; i < size1; i++) {
        array1[i] = i;
    }
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size3; j++) {
            array2[i][j] = i * size3 + j;
        }
    }

    // 代入された値の表示
    for (int i = 0; i < size1; i++) {
        printf("array1[%d]..%d\n", i, array1[i]);
    }
    for (int i = 0; i < size2; i++) {
        for (int j = 0; j < size3; j++) {
            printf("\t%d", array2[i][j]);
        }
        printf("\n");
    }

    // メモリの解放
    free(array1);
    for (int i = 0; i < size2; i++) {
        free(array2[i]);
    }
    free(array2);

    return 0;
}
