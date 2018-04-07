#include <stdio.h>
#define CIRCULAR_PERMUTATION_EXPLAIN "서로 다른 n개를 원형으로 배열하는 순열을 <원순열>이라고 한다."
#define CIRCULAR_PERMUTATION_FORMAT "원순열 형식: n!/n = (n-1)!"
#define CIRCULAR_PERMUTATION_EX "\n<원순열 예제>\n"
int main() {
	long n, i, storage;
	printf("%s\n%s\n%s", CIRCULAR_PERMUTATION_EXPLAIN, CIRCULAR_PERMUTATION_FORMAT, CIRCULAR_PERMUTATION_EX);
	printf("변수 n의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n");
	scanf("%d", &n);
	printf("\n%d!/%d\n=", n, n);
	storage = 1;
	if(n==1) {
		printf("1\n");
	} else if(n<1) {
        printf("오류! n의 값은 <0보다 큰 정수>여야 해요!\n");
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