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
// fgetc를 쓰지 말고 a.txt에 있는 문자열을 옮기든지 다른 식으로 바꿀 

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp = fopen("a.txt", "r");

	int SizeOfString;
	int i = 0;
	char *string;

	printf("만들고 싶은 문자열의 원소 개수 : ");
	scanf("%d", &SizeOfString);

	string = (char *)malloc(sizeof(char) * SizeOfString);

	free(string);

	printf("검색할 문자열 : ");
	scanf("%s", &string);


	while (string) {
		if (string != fgetc(fp)) {
			fgetc(fp);
		}
		else if (fgetc(fp) == EOF) {
			printf("찾으시는 결과가 없습니다.");
			return 0;
		}
		string++;
		fgetc(fp);		
	}
	printf("찾으시는 문자열이 있습니다.");
	return 0;
}
