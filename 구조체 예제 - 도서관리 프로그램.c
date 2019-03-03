// 미완성

#include <stdio.h>

int add_books(struct books *list[100], int *num);

struct books {
	char title[30];
	char author[30];
	char pub[30];
	int borrowed;
};

int main() {
	struct books book_list[100];
	int user_choice;
	int num = 0;

	while (1) {
		printf("도서관리 프로그램입니다. 원하는 번호를 선택하십시오.\n");
		printf("1. 도서 등록 // 2. 도서 검색 // 3. 대여 // 4. 반납 // 5. 프로그램 종료\n");
		scanf_s("%d", &user_choice);

		if (user_choice == 1) {
			add_books(&book_list[100], &num);
		}
		else if (user_choice == 2) {

		}
		else if (user_choice == 3) {

		}
		else if (user_choice == 4) {

		}
		else if (user_choice == 5) {
			break;
		}
		else {
			printf("번호를 잘못 입력하였습니다.\n");
		}
	}
	return 0;
}

// 도서 등록 함수
int add_books(struct books *list[100], int *num) {

	printf("도서의 제목을 입력하십시오.\n");
	scanf_s("%s\n", list[*num]->title, 30);
	printf("저자의 이름을 입력하십시오.\n");
	scanf_s("%s\n", list[*num]->author, 30);
	printf("출판사 이름을 입력하십시오.\n");
	scanf_s("%s\n", list[*num]->pub, 30);

	num++;

	return 0;
}
