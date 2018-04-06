#include <stdio.h>
#define PERMUTATION_EXPLAIN "���� �ٸ� n������ r [0<r<=n] ���� ���Ͽ� �Ϸķ� �����ϴ� ���� n������ r���� ���ϴ� <����>�̶�� �Ѵ�."
#define PERMUTATION_FORMAT "������ ����: nPr = n*(n-1)*(n-2)*...*(n-r+1)\n"
#define PERMUTATION_EX "<������ ����>"
int main()
{
	long n, r, i, storage; 
	printf("%s\n%s\n%s\n", PERMUTATION_EXPLAIN, PERMUTATION_FORMAT, PERMUTATION_EX); //

	printf("���� n�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n");
	scanf("%d", &n);
	printf("���� r�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n");
	scanf("%d", &r);


	storage = 1;
	if(r<=0 || r>n)
	{
		printf("\n����! r�� ���� 0���� Ŀ�� �ϸ� n�� ���� r�� ���� ���ų� Ŀ�� �մϴ�. (����, �������� �մϴ�.)\n");
	}
	else 
	{
		printf("\n%dP%d\n=", n, r);
		for(i=n; i>n-r; i--) 
			{
				storage=storage*i;
					if(i == n-r+1) 
						{
							printf("%d\n=%d\n", i, storage); //
						}
					else
						{
							printf("%d*", i);
						}			
			}
	}
		return 0;
}