#include <stdio.h>


void add_books(struct books *list, int *num);
int search_books(struct books *list, int num);
char compare(char *str1, char *str2);
void borrow_books(struct books *list);
void return_books(struct books *list);

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
			add_books(book_list, &num);
		}
		else if (user_choice == 2) {
			search_books(book_list, num);
		}
		else if (user_choice == 3) {
			borrow_books(book_list);
		}
		else if (user_choice == 4) {
			return_books(book_list);
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
void add_books(struct books *list, int *num) {

	printf("도서의 제목을 입력하십시오.\n");
	scanf_s("%s", list[*num].title, 30);
	printf("저자의 이름을 입력하십시오.\n");
	scanf_s("%s", list[*num].author, 30);
	printf("출판사 이름을 입력하십시오.\n");
	scanf_s("%s", list[*num].pub, 30);
	list[*num].borrowed = 0;
	printf("===============================================================\n");

	num++;
}

// 도서 검색 함수
int search_books(struct books *list, int num) {
	int i;
	char user_search[30];

	printf("검색할 단어를 입력해주십시오 : ");
	scanf_s("%s", user_search, 30);

	for (i = 0; i <= num; i++) {
		if (compare(list[i].title, user_search)) {
			printf("도서 번호: %d\n", i);
			printf("도서 : %s\n", list[i].title);
			printf("저자: %s\n", list[i].author);
			printf("출판사 : %s\n", list[i].pub);
			printf("===============================================================\n");
		}
		else if (compare(list[i].author, user_search)) {
			printf("도서 번호: %d\n", i);
			printf("도서 : %s\n", list[i].title);
			printf("저자: %s\n", list[i].author);
			printf("출판사 : %s\n", list[i].pub);
			printf("===============================================================\n");
		}
		else if (compare(list[i].pub, user_search)) {
			printf("도서 번호: %d\n", i);
			printf("도서 : %s\n", list[i].title);
			printf("저자: %s\n", list[i].author);
			printf("출판사 : %s\n", list[i].pub);
			printf("===============================================================\n");
		}
		else
			printf("검색 결과가 없습니다.\n");
			printf("===============================================================\n");
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

// 도서 대여 함수
void borrow_books (struct books *list) {
	int borrow_number;

	printf("대여하고 싶은 도서의 번호 : \n");
	scanf_s("%d", &borrow_number);

	if (list[borrow_number].borrowed == 0) {
		printf("대여가 완료되었습니다.\n");
		list[borrow_number].borrowed = 1;
		printf("===============================================================\n");
	}
	else {
		printf("이미 대출중입니다.\n");
		printf("===============================================================\n");
	}
}

// 도서 반납 함수
void return_books (struct books *list) {
	int return_number;

	printf("반납하고 싶은 도서의 번호 : \n");
	scanf_s("%d", &return_number);

	if (list[return_number].borrowed == 1) {
		printf("반납이 완료되었습니다.\n");
		list[return_number].borrowed = 0;
		printf("===============================================================\n");
	}
	else {
		printf("반납할 수 없는 책입니다.\n");
		printf("===============================================================\n");
	}
}
