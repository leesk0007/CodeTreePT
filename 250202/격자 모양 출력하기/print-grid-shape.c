#include <stdio.h>
#include <stdlib.h> // 동적 메모리 할당을 위한 헤더 파일

typedef struct {
    int x;
    int y;
} Point;

int main() {
    int n, m;
    
    // 사용자 입력 받기
    scanf("%d %d", &n, &m);

    // 배열 동적 할당
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    Point *p = (Point *)malloc(m * sizeof(Point));

    // 좌표 입력 받기
    for (int i = 0; i < m; i++)
        scanf("%d %d", &p[i].x, &p[i].y);

    // 초기화 및 조건에 따른 값 설정
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0; // 기본값 0 설정
        }
    }

    // 특정 좌표에 값 할당
    for (int k = 0; k < m; k++) {
        int x = p[k].x - 1; // 1-based index → 0-based index
        int y = p[k].y - 1;
        if (x >= 0 && x < n && y >= 0 && y < n) {
            arr[x][y] = (x + 1) * (y + 1);
        }
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 동적 메모리 해제
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    free(p);

    return 0;
}
