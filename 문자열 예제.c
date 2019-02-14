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
	char str1[101];
	printf("최대 100자로 문자열을 입력하시오.\n");
	scanf("%s", str1);
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

//길이가 최대 100 인 문자열을 입력 받아서 소문자는 대문자로, 대문자는 소문자로 출력하는 함수를 만들어보세요.

char ChangeStr(char *str);

int main(){
	char str[101];

	printf("최대 100자까지 문자열을 입력하시오\n");
	scanf("%s", str);

	ChangeStr(str);

	printf("%s\n", str);
	return 0;
}

char ChangeStr(char *str){
	while(*str){
		if(*str >= 'a' && *str <= 'z'){
			*str -= 32;
			str++;
		}
		else if(*str >= 'A' && *str <= 'Z'){
			*str += 32;
			str++;
		}
		else {
			str++;
		}
	}

	return 0;
}

//두 개의 문자열을 입력 받아서 같다면 "같다", 다르면 "다르다" 라고 출력하는 함수를 만들어보세요. 
#include <stdio.h>

char compare(char *str1, char *str2);

int main(){
	char str1[100];
	char str2[100];

	printf("문자열 두 개를 입력하세요.\n");
	scanf("%s %s", str1, str2);

	if(compare(str1, str2)){
		printf("It's same!");
	}
	else{
		printf("It's different!");
	}

	return 0;
}

char compare(char *str1, char *str2){
	while(*str1 || *str2){
		if(*str1 != *str2){
			return 0;
		}
		str1++;
		str2++;	
	}

	return 1;
}
