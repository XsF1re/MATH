#include <stdio.h> //표준 입출력 헤더 파일을 포함
#define FACTORIAL_EXPLAIN "<팩토리얼>은 1부터 어떤 양의 정수 n까지의 정수를 모두 곱한 것을 말하며 n!로 나타낼 수 있다." //FACTORIAL_EXPLAIN의 매크로 함수 정의
#define FACTORIAL_FORMAT "팩토리얼 형식: n! = n*(n-1)*(n-2)*(n-3)*...*1\n" //FACTORIAL_FORMAT의 매크로 함수 정의
#define FACTORIAL_EX "<팩토리얼 예제>\n" //FACTORIAL_EX의 매크로 함수 정의
int main() {
	long n, i, storage; //정수형 변수 n, i, storage 선언
	printf("%s\n%s\n%s", FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX); //FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX 매크로 함수 호출 및 출력
	printf("변수 n의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n"); //해당 문자열 출력 
	scanf("%d", &n); //n의 값 입력
	printf("\n%d!\n=", n); //(n의 값)!= 출력 
	storage = 1; //storage 변수를 1로 초기화
	if(n==0) { //만약 n이 0의 값을 가진다면,
		printf("1\n"); //1이라는 값을 출력
	} else if(n<0) { //n의 값이 0보다 작다면,
		printf("오류! n의 값은 <음이 아닌 정수>여야 해요!\n"); //오류 발생
	} else { //그렇지 않으면,
		for (i=n; i>0; i--) { //i의 값을 n의 값으로 설정, i가 0보다 크면 반복문 실행, i는 후치 감소
			storage = storage*i; //storage의 값을 기존에 있던 storage의 값과 i의 값을 곱함
			if(i == 1) { //만약 i의 값이 1이라면,
				printf("%d\n=%d\n", i, storage); //(i의 값)=(storage의 값) 출력
			} else { //그렇지 않으면,
				printf("%d*", i); //(i의 값)* 출력
			}
		}
	}
	return 0;
}