#include <stdio.h> //ǥ�� ����� ��� ������ ����
#define FACTORIAL_EXPLAIN "<���丮��>�� 1���� � ���� ���� n������ ������ ��� ���� ���� ���ϸ� n!�� ��Ÿ�� �� �ִ�." //FACTORIAL_EXPLAIN�� ��ũ�� �Լ� ����
#define FACTORIAL_FORMAT "���丮�� ����: n! = n*(n-1)*(n-2)*(n-3)*...*1\n" //FACTORIAL_FORMAT�� ��ũ�� �Լ� ����
#define FACTORIAL_EX "<���丮�� ����>\n" //FACTORIAL_EX�� ��ũ�� �Լ� ����
int main() {
	long n, i, storage; //������ ���� n, i, storage ����
	printf("%s\n%s\n%s", FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX); //FACTORIAL_EXPLAIN, FACTORIAL_FORMAT, FACTORIAL_EX ��ũ�� �Լ� ȣ�� �� ���
	printf("���� n�� ���� �Է��ϼ���: (��, 0 ~ 2147483647 ���� ���� ��)\n"); //�ش� ���ڿ� ��� 
	scanf("%d", &n); //n�� �� �Է�
	printf("\n%d!\n=", n); //(n�� ��)!= ��� 
	storage = 1; //storage ������ 1�� �ʱ�ȭ
	if(n==0) { //���� n�� 0�� ���� �����ٸ�,
		printf("1\n"); //1�̶�� ���� ���
	} else if(n<0) { //n�� ���� 0���� �۴ٸ�,
		printf("����! n�� ���� <���� �ƴ� ����>���� �ؿ�!\n"); //���� �߻�
	} else { //�׷��� ������,
		for (i=n; i>0; i--) { //i�� ���� n�� ������ ����, i�� 0���� ũ�� �ݺ��� ����, i�� ��ġ ����
			storage = storage*i; //storage�� ���� ������ �ִ� storage�� ���� i�� ���� ����
			if(i == 1) { //���� i�� ���� 1�̶��,
				printf("%d\n=%d\n", i, storage); //(i�� ��)=(storage�� ��) ���
			} else { //�׷��� ������,
				printf("%d*", i); //(i�� ��)* ���
			}
		}
	}
	return 0;
}