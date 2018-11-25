#include<stdio.h>
#include<stdlib.h>

//구조체 : 여러 자료형을 묶어서 관리할 수 있는 자료형

// 학생 구조체 : 학교, 학년, 이름, 나이

typedef struct Student {
	char school[10];
	int grade;
	char name[10];
	int age;
}student; // 이름 

void main() {

	//내가 입력받는 숫자만큼 학생 구조체 배열을 생성할 수 있는 코드

	//정적 구조체 배열 

	student students[100];

	// 학생 30명 밖에 없음. 그럼 70명은? : 메모리 낭비
	// 정적할당은  메모리 낭비가 있을 수 있다.

	// 내가 입력받는 학생 수 만큼. 배열은 생성하고 싶다.
	// 프로그램 실행 후 생김. 런타임 

	int student_num;
	int i;
	scanf("%d", &student_num);

	student *std;
	// 동적 배열 함수를 사용 => malloc

	std = (student*)malloc(student_num * sizeof(student));

	for (i = 0; i < student_num; i++) {
		printf("학교 이름을 입력하세요.");
		scanf("%s", std[i].school);
		printf("나이를 입력하세요.");
		scanf("%d", &std[i].age);
		printf("이름을 입력하세요.");
		scanf("%s", std[i].name);
		printf("학년을 입력하세요.");
		scanf("%d", &std[i].grade);
	}


}