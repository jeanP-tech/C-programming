// 사용자에게 N을 입력받고, 1부터 N까지 소수의 개수를 구하시오.

#include <stdio.h>

int prime_number(int number);

int main(){
	int N;
	scanf("%d", &N);
	
	printf("%d", prime_number(N));
	
	return 0;
}
	
int prime_number(int number){
	int this_is_prime = 0;
	int prime_counts = 0;
		
	for(int i = 2; i <= number; i++){
		for(int j = 2; j <= i; j++){
			if(i % j == 0){
				this_is_prime += 1;
			}
		}
		if(this_is_prime == 1){
			prime_counts += 1;
		}					
		this_is_prime = 0;
	}
	return prime_counts;	
}

// 위 10 개의 원소들 중 최대값 구하는 함수를 이용하여, 10 개의 원소를 입력 받고 그 원소를 큰 순으로 출력하는 함수를 만들어보세요. (난이도 : 中)

#include <stdio.h>

int BubbleSort(int *parr);

int main(){
	int arr[10];
	int i;

	for(i = 0; i < 10; i++){
		scanf("%d\n", &arr[i]);
	}

	BubbleSort(arr);

	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}

int BubbleSort(int *parr){
	int i, j;
	int temp;
	
	for(i = 0; i < 10; i++){
		for(j = i; j < 10; j++){
			if(parr[i] < parr[j]){
				temp = parr[i];
				parr[i] = parr[j];
				parr[j] = temp;
			}
		}
	}
 return 0;
}



// 문제 출처: https://modoocode.com/26
