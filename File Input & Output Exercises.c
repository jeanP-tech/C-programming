// 사용자로 부터 경로를 입력 받아서 그 곳에 파일을 생성하고 a 를 입력해놓는 프로그램을 만들어보세요 

#include <stdio.h>

int main() {
	char filename[50];
	printf("경로를 입력하세요.\n");
	scanf("%s", &filename);
	FILE *fp;
	fp = fopen(filename, "w");

	if (fp == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	fputs("a", fp);
	
	fclose(fp);

	return 0;
}

// a.txt 에 어떠한 긴 글이 들어 있는데, 이 글을 입력 받아서 특정한 문자열을 검색하는 프로그램을 만들어보세요
// 미완성
// sear

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *fp = fopen("C:\\USERS\\USER\\Desktop\\a.txt", "r");

	char search_str[10];
	char text[100];
	
	if (fp == NULL) {
		printf("ERROR");
		return 0;
	}
	fgets(text, 100, fp);

	printf("검색할 문자열 : ");
	scanf("%s", search_str);

	if (strcmp(search_str, text) == 0) {
		printf("찾으시는 문자열이 있습니다.");
		return 0;
	}
	else {
		printf("찾으시는 문자열이 없습니다.");
		return 0;
	}

	return 0;
	fclose(fp);
}
