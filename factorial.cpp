#include <stdio.h>
#define FACTORIAL_EXPLAIN "<���丮��>�� 1���� � ���� ���� n������ ������ ��� ���� ���� ���ϸ� n!�� ��Ÿ�� �� �ִ�."
#define FACTORIAL_FORMAT "���丮�� ����: n! = n*(n-1)*(n-2)*(n-3)*...*1\n"
#define FACTORIAL_EX "<���丮�� ����>\n"
int main()
{
	long n, i, storage; 
	printf("%s\n%s\n%s", FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX);

	printf("���� n�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n");
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