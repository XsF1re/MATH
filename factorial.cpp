#include <stdio.h>
#define FACTORIAL_EXPLAIN "���丮�� ����: n! = n*(n-1)*(n-2)*(n-3)*...*1\n"
#define FACTORIAL_EX "���丮�� ����:"
int main()
{
	long n, i, for_multiple, multiple; //������ ���� �̸� n, i, for_multiple, multiple�� ����
	printf("%s", FACTORIAL_EXPLAIN); //

	printf("���� n�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n");
	scanf("%d", &n);
	printf("%d!\n=", n);
	for_multiple = 0;
	multiple = n;
		for(i=n; i>0; i--) //n�� 5�� ���� �ÿ� �� ���� i�� ����, i>0���� �ݺ���, i�� -1�� ��ġ ����
			{
				if(i == 1) //i ���� 1�� ���
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