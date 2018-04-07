#include <stdio.h>
#define CIRCULAR_PERMUTATION_EXPLAIN "���� �ٸ� n���� �������� �迭�ϴ� ������ <������>�̶�� �Ѵ�."
#define CIRCULAR_PERMUTATION_FORMAT "������ ����: n!/n = (n-1)!"
#define CIRCULAR_PERMUTATION_EX "\n<������ ����>\n"
int main() {
	long n, i, storage;
	printf("%s\n%s\n%s", CIRCULAR_PERMUTATION_EXPLAIN, CIRCULAR_PERMUTATION_FORMAT, CIRCULAR_PERMUTATION_EX);
	printf("���� n�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n");
	scanf("%d", &n);
	printf("\n%d!\n=", n);
	storage = 1;
	if(n==0) {
		printf("1\n");
	} else if(n<0) {
		printf("����! n�� ���� <���� �ƴ� ����>���� �ؿ�!\n");
	} else {
		for (i=n; i>0; i--) {
			storage = storage*i;
			if(i == 1) {
				storage = storage/n;
				printf("%d/%d\n=(%d-1)!\n=%d\n", i, n, n, storage);
			} else {
				printf("%d*", i);
			}
		}
	}
	return 0;
}