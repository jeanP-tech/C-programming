// 사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요.
// 특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요 (난이도 : 中上)
// 출처: https://modoocode.com/28

#include <stdio.h>

void BubbleSort(int *arr, int length);
void P_or_NP(int *arr, int length, int avg_of_avg);

int main(){
  int score[4][2];
  int avg[5];
  int i, j;
  int length = sizeof(avg) / sizeof(int);

  for(i = 0; i < 5; i++){
    printf("학생 %d의 수학, 국어, 영어 점수를 입력하시오.\n", i + 1);
    scanf("%d %d %d", &score[i][j], &score[i][j + 1], &score[i][j + 1]);
		avg[i] = (score[i][j] + score[i][j + 1] + score[i][j + 1]) / 3;
  }


  int avg_of_avg = (avg[0] + avg[1] + avg[2] + avg[3] + avg[4]) / 5;

  BubbleSort(&avg, length);

  P_or_NP(&avg, length, avg_of_avg);

  return 0;
}

void BubbleSort(int *arr, int length){
  int i, j, temp;

  for(i = 0; i < length - 1; i++){
    for(j = 0; j < length - 1; j++){
      if(arr[j] < arr[j + 1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void P_or_NP(int *arr, int length, int avg_of_avg){
  int i;

  for(i = 0; i < length; i++){
    if(arr[i] >= avg_of_avg)
      printf("%d 합격\n", arr[i]);
    else
      printf("%d 불합격\n", arr[i]);
  }
}
