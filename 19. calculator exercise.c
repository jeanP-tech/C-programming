// 메인함수의 인자를 이용한 계산기
// i--와 --i 개념 때문에 헷갈렸던 문제

#include <stdio.h>

int str2int(char *str);

int main(int argc, char **argv) {
	
	int num1, num2;

	if (argc != 4) {
		printf("인자 수가 맞지 않습니다.\n");
	}

	num1 = str2int(argv[1]);
	num2 = str2int(argv[3]);

	printf("%d", num1 + num2);

	return 0;
}

int str2int(char *str) {
	int i = 0;

	// 자리수 i 구하기
	while (str[i] != '\0') {
		i++;
	}

	int times = 1; // 자리수에 따라 1, 10, 100을 곱해야하므로 그 수를 담는 변수
	int converted = 0; // char에서 int로 바꾼 값

	while (--i >= 0) {
		converted += (str[i] - '0') * times;
		times *= 10;
	}

	return converted;
}
