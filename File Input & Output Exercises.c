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
