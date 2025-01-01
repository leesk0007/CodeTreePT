#include <stdio.h>

int main() {
    // 2차원 배열을 구현합니다.
	int arr_2d[4][4];
    int sum = 0;
	
	// 각 줄마다 정수를 입력받습니다.
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &arr_2d[i][j]);
	
	// 색칠된 칸에 있는 원소들의 합을 구합니다.
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j <= i; j++)
			sum += arr_2d[i][j];
	}

    // 출력
    printf("%d\n", sum);

    return 0;
}