// 사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요. 특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요 (난이도 : 中上)
// 미완성

int score_array(int *arr);
int BubbleSort(int *arr);

int main(){
	int score[5][4];
	
	
	for(int i = 0; i < 5; i++){
		printf("학생 %d 의 수학, 국어, 영어 점수를 입력하세요:", i + 1);
		for(int j = 0; j < 3; j++){			
			scanf("%d\n", &score[i][j]);
		}
	}


return 0;	
}

int BubbleSort(int *arr){
	int length = sizeof(arr) / sizeof(int);
	int temp;
	
	for(int i = 0; i < length - 1; i++){
		for(int j = 0; j < length - 1; j++){
			if(arr[j] < arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int score_array(int *arr){
	
}

//출처: https://modoocode.com/28
