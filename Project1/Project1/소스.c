#include<stdio.h>
#include<stdlib.h>

//����ü : ���� �ڷ����� ��� ������ �� �ִ� �ڷ���

// �л� ����ü : �б�, �г�, �̸�, ����

typedef struct Student {
	char school[10];
	int grade;
	char name[10];
	int age;
}student; // �̸� 

void main() {

	//���� �Է¹޴� ���ڸ�ŭ �л� ����ü �迭�� ������ �� �ִ� �ڵ�

	//���� ����ü �迭 

	student students[100];

	// �л� 30�� �ۿ� ����. �׷� 70����? : �޸� ����
	// �����Ҵ���  �޸� ���� ���� �� �ִ�.

	// ���� �Է¹޴� �л� �� ��ŭ. �迭�� �����ϰ� �ʹ�.
	// ���α׷� ���� �� ����. ��Ÿ�� 

	int student_num;
	int i;
	scanf("%d", &student_num);

	student *std;
	// ���� �迭 �Լ��� ��� => malloc

	std = (student*)malloc(student_num * sizeof(student));

	for (i = 0; i < student_num; i++) {
		printf("�б� �̸��� �Է��ϼ���.");
		scanf("%s", std[i].school);
		printf("���̸� �Է��ϼ���.");
		scanf("%d", &std[i].age);
		printf("�̸��� �Է��ϼ���.");
		scanf("%s", std[i].name);
		printf("�г��� �Է��ϼ���.");
		scanf("%d", &std[i].grade);
	}


}