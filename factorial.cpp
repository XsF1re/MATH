#include <stdio.h>
#define FACTORIAL_EXPLAIN "<팩토리얼>은 1부터 어떤 양의 정수 n까지의 정수를 모두 곱한 것을 말하며 n!로 나타낼 수 있다."
#define FACTORIAL_FORMAT "팩토리얼 형식: n! = n*(n-1)*(n-2)*(n-3)*...*1\n"
#define FACTORIAL_EX "<팩토리얼 예제>\n"
int main()
{
	long n, i, storage; 
	printf("%s\n%s\n%s", FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX);

	printf("변수 n의 값을 입력하세요: (단, 0 ~ 2147483647 숫자 범위 안)\n");
	scanf("%d", &n);

	printf("\n%d!\n=", n);

	storage = 1;
		for(i=n; i>0; i--) 
			{
				storage = storage*i;

				if(i == 1) 
					{
						printf("%d\n=%d\n", i, storage); //
					}
				else
					{
						printf("%d*", i);
						
					}					
			}

		return 0;
}