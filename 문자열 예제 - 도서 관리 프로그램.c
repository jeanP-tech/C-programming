#include <stdio.h>

// 함수 인자를 포인터로 받는 이유는 배열을 가리키기 때문
// (*title)[30]처럼 쓰는 이유는 2차원 배열 포인터를 지정할 때 열의 개수를 써줘야 하기 때문이다  

int add_books(char (*title)[30], char (*author)[30], char (*pub)[30], int *borrowed, int *book_number);
int search_books(char(*title)[30], char(*author)[30], char(*pub)[30], int *borrowed, int book_number);
char compare(char *str1, char *str2);
int borrow_books(int *borrowed);
int return_books(int *borrowed);

int main() {
	char title[100][30];
	char author[100][30];
	char pub[100][30];
	int borrowed[100];

	int user_choice;
	int book_number = 0;


	while (1) {
		printf("원하는 번호를 입력하시오.\n");
		printf("1. 도서 추가 2. 도서 검색 3. 대출 4. 반납 5. 프로그램 종료\n");
		scanf_s("%d", &user_choice);

		if (user_choice == 1) {
			add_books(title, author, pub, borrowed, &book_number);
		}
		else if (user_choice == 2) {
			search_books(title, author, pub, borrowed, book_number);
		}
		else if (user_choice == 3) {
			borrow_books(borrowed);
		}
		else if (user_choice == 4) {
			return_books(borrowed);
		}
		else if (user_choice == 5) {
			break;
		}
		else {
			printf("번호를 잘못 입력하였습니다. 다시 입력하세요.\n");
		}
	}
	return 0;
}

int add_books(char(*title)[30], char(*author)[30], char(*pub)[30], int *borrowed, int *book_number) {

	printf("도서 이름을 입력하세요.\n");
	scanf_s("%s", title[*book_number], 30);
	printf("저자 이름을 입력하세요. \n");
	scanf_s("%s", author[*book_number], 30);
	printf("출판사 이름을 입력하세요.\n");
	scanf_s("%s", pub[*book_number], 30);
	
	borrowed[*book_number] = 0;
	(*book_number)++;

	return 0;
}

int search_books(char(*title)[30], char(*author)[30], char(*pub)[30], int *borrowed, int book_number) {
	char user_search[30];
	int num;

	printf("검색어를 입력하세요.\n");
	scanf_s("%s", &user_search, 30);

	for (num = 0; num <= book_number;  num++) {
		if (compare(user_search, title[num])) {
			printf("도서 번호는 %d, 도서 이름은 %s, 저자 이름은 %s, 출판사 이름은 %s입니다.\n", 
				num, title[num], author[num], pub[num]);
			if (borrowed[num] == 1) {
				printf("현재 대출중입니다.\n");
			}
			else {
				printf("현재 대출 가능합니다.\n");
			}
		}
		else if (compare(user_search, author[num])) {
			printf("도서 번호는 %d, 도서 이름은 %s, 저자 이름은 %s, 출판사 이름은 %s입니다.\n",
				num, title[num], author[num], pub[num]);
			if (borrowed[num] == 1) {
				printf("현재 대출중입니다.\n");
			}
			else {
				printf("현재 대출 가능합니다.\n");
			}
		}
		else if (compare(user_search, pub[num])) {
			printf("도서 번호는 %d, 도서 이름은 %s, 저자 이름은 %s, 출판사 이름은 %s입니다.\n",
				num, title[num], author[num], pub[num]);
			if (borrowed[num] == 1) {
				printf("현재 대출중입니다.\n");
			}
			else {
				printf("현재 대출 가능합니다.\n");
			}
		}
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

int borrow_books(int *borrowed) {
	int num;

	printf("대출하고 싶은 도서의 번호를 입력하시오.\n");
	scanf_s("%d", &num);

	if (borrowed[num] == 1) {
		printf("이미 대출중입니다.\n");
	}
	else {
		borrowed[num] = 1;
		printf("대출이 완료되었습니다.\n");
	}
	return 0;
}

int return_books(int *borrowed) {
	int num;

	printf("반납하고 싶은 도서의 번호를 입력하시오.\n");
	scanf_s("%d", &num);

	if (borrowed[num] == 1) {
		borrowed[num] = 0;
		printf("반납이 완료되었습니다.\n");
	}
	else {
		printf("대출되지 않은 책입니다.\n");
	}
	return 0;
}
