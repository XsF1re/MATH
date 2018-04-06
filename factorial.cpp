#include <stdio.h>
#define FACTORIAL_EXPLAIN "팩토리얼 형식: n! = n*(n-1)*(n-2)*(n-3)*...*1\n"
#define FACTORIAL_EX "팩토리얼 예제:"
int main()
{
	long n, i, for_multiple, multiple; //정수인 변수 이름 n, i, for_multiple, multiple을 선언
	printf("%s", FACTORIAL_EXPLAIN); //

	printf("변수 n의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n");
	scanf("%d", &n);
	printf("%d!\n=", n);
	for_multiple = 0;
	multiple = n;
		for(i=n; i>0; i--) //n에 5를 대입 시에 그 값을 i에 선언, i>0까지 반복함, i는 -1씩 후치 감소
			{
				if(i == 1) //i 값이 1인 경우
					{
						printf("%d\n=%d\n", i, multiple); //
					}
				else
					{
						printf("%d*", i);
						
					}	

				multiple=multiple*(for_multiple-1);
				for_multiple-=1;
				
			}
		return 0;
}