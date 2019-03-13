// 메인함수의 인자를 이용한 계산기
// 미완

#include <stdio.h>

int str2int(char *pargv);

int main(int argc, char *argv[]) {
	if (argc = 4) {
		int num1 = str2int(argv[1]);
		int num2 = str2int(argv[3]);

		printf("%d", num1 + num2);
	}
	else {
		printf("인자 수가 맞지 않습니다.\n");
	}
	return 0;
}

int str2int(char *pargv) {
	int i = 0;

	// 자리수 i 구하기
	while (pargv[1][i] != '\0') {
		i++;
	}

	int j = i; // 현재 가리키는 수의 자리수
	int sq = 1;
	int converted = 0; // char에서 int로 바꾼 값

	while (j-- >= 0) {
		while (i - j > 0) {
			sq *= 10;
			j++;
		}
		converted += (pargv[1][i] - '0') * sq;
	}
	return converted;
}
