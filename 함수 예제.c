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
