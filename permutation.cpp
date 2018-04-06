#include <stdio.h>
#define PERMUTATION_EXPLAIN "서로 다른 n개에서 r [0<r<=n] 개를 택하여 일렬로 나열하는 것을 n개에서 r개를 택하는 <순열>이라고 한다."
#define PERMUTATION_FORMAT "순열의 형식: nPr = n*(n-1)*(n-2)*...*(n-r+1)\n"
#define PERMUTATION_EX "<순열의 예제>"
int main() {
	long n, r, i, storage;
	printf("%s\n%s\n%s\n", PERMUTATION_EXPLAIN, PERMUTATION_FORMAT, PERMUTATION_EX);
	//
	printf("변수 n의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n");
	scanf("%d", &n);
	printf("변수 r의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n");
	scanf("%d", &r);
	storage = 1;
	if(r<=0 || r>n) {
		printf("\n오류! r의 값은 0보다 커야 하며 n의 값은 r의 값과 같거나 커야 합니다. (또한, 정수여야 합니다.)\n");
	} else {
		printf("\n%dP%d\n=", n, r);
		for (i=n; i>n-r; i--) {
			storage=storage*i;
			if(i == n-r+1) {
				printf("%d\n=%d\n", i, storage);
				//
			} else {
				printf("%d*", i);
			}
		}
	}
	return 0;
}
