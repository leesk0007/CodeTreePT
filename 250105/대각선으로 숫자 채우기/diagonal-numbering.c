#include <stdio.h>

int main() {
    int n, m, i, j, a = 1;
    
    // 입력 받기
    scanf("%d %d", &n, &m);

    int arr[n][m];

    // 배열 초기화
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            arr[i][j] = 0;
        }
    }

    // 대각선 순회 시작
    int row = 0, col = 0;

    while (a <= n * m) {
        int r = row, c = col;

        // 대각선 순회
        while (r < n && c >= 0) {
            arr[r][c] = a++;
            r++;
            c--;
        }

        // 다음 대각선의 시작점 설정
        if (col < m - 1) {
            col++;
        } else {
            row++;
        }
    }

    // 결과 출력
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
