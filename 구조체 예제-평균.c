// 구조체 배열을 이용해 3명 학생의 국어, 영어, 수학 점수를 입력받습니다.
// 각 학생의 평균을 소수점 아래 한자리까지 출력합니다.
// 평균을 구하는 부분은 함수로 작성합니다.

#include <stdio.h>

struct score {
	char name[20];
	int korean;
	int english;
	int math;
};

void average(struct score s[]); // 평균 구하는 함수

int main() {
	struct score list[3];
	int i;

  // 각 학생의 점수를 입력받음
	for (i = 0; i < 4; i++) {
		printf("학생 %d의 이름, 국어, 영어, 수학 점수를 입력하시오\n", i + 1);
		scanf_s("%s %d %d %d", &list[i].name, 20, &list[i].korean, &list[i].english, &list[i].math);
	}

	average(list);

	return 0;
}

// 평균 구하는 함수. 함수 내부 값을 바꾸는 것이 아니므로 포인터를 쓸 필요는 없음.
void average(struct score s[]) {
	int i;
	float avg[2];

	for (i = 0; i < 4; i++) {
		avg[i] = (float)(s[i].korean + s[i].english + s[i].math) / 3;
	}

	for (i = 0; i < 4; i++) {
		printf("%s %.1f\n", s[i].name, avg[i]);
	}
}
