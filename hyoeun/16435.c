#include <stdio.h>

int main() {
	//������ ���� : snake ����, ���� ����, ���� ����
	int snakeLength, countFruit, save = 0;
	int highFruit[1000];
	int n = 0;
	scanf_s("%d", &countFruit);
	scanf_s("%d", &snakeLength);
	for (int i = 0; i < countFruit; i++) {
		scanf_s("%d", &highFruit[i]);
	}
	for (int i = 0; i < countFruit; i++) {
		for (int j = 0; j < countFruit - 1; j++) {
			if (highFruit[j] > highFruit[j + 1]) {
				save = highFruit[j];
				highFruit[j] = highFruit[j + 1];
				highFruit[j + 1] = save;
			}
		}
	}
	for (int j = 0; j < countFruit; j++) {//������ũ ���� ������ŭ �ݺ�(������ ���� �ø��� ���� ���ϸ� ���� �� ���� ���)
		if (snakeLength >= highFruit[j])
			snakeLength++;
	}
	printf("%d", snakeLength);
	return 0;
}