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

// 길이가 최대 100 인 문자열을 하나 입력 받아서 문자열을 역순으로 출력하는 함수를 만들어보세요.

char reverse(char *str);

int main(){
	char str1[101] = "ReverseMe";
	reverse(str1);
	 
	return 0;
}

char reverse(char *str){
	int i = 0;
	
	while(*str != '\0'){
		i++;
		str++;
	}

	str--;
	
	while(i){
		printf("%c", *(str));
		str--;
		i--;
	}
	
	return 0;
}
