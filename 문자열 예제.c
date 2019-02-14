// 문자열 합치는 함수

#include <stdio.h>

char stradd(char *str1, char *str2);

int main() {
	char first[] = "My name is";
	char second[] = "Jean";

	stradd(first, second);

	printf("%s", first);
	return 0;
}

char stradd(char *str1, char *str2) {
	while (*str1) {
		str1++;
	}
	while (*str2) {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';

	return 0;
}

// 문자열 비교 함수
#include <stdio.h>

char compare(char *str1, char *str2);

int main() {
	char str1[] = "compare";
	char str2[] = "compare";

	if (compare(str1, str2)) {
		printf("It's same!");
	}
	else {
		printf("It's different!");
	}


	return 0;
}

char compare(char *str1, char *str2) {
	while (*str1) {
		if (*str1 != *str2) {
			return 0;
		}
		str1++;
		str2++;
	}

	if (*str2 == '\0')
		return 1;

	return 0;

}
