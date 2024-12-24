#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, q, a, b, s, e;

    // n, q 입력
    scanf("%d %d", &n, &q);

    // 배열 및 맵(해시 테이블) 초기화
    int arr[n];
    int *map = (int *)calloc(100001, sizeof(int)); // 최대 값 제한 가정 (100,000)

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        map[arr[i]] = i + 1; // 값 -> 인덱스 저장
    }

    // 명령 처리
    for (i = 0; i < q; i++) {
        scanf("%d", &a);
        if (a == 1) {
            scanf("%d", &b);
            printf("%d\n", arr[b - 1]); // b번째 값 출력
        } else if (a == 2) {
            scanf("%d", &b);
            if (map[b] > 0)
                printf("%d\n", map[b]); // 저장된 인덱스 출력
            else
                printf("0\n");
        } else if (a == 3) {
            scanf("%d %d", &s, &e);
            for (int j = s - 1; j < e; j++) {
                printf("%d ", arr[j]); // s부터 e까지 출력
            }
            printf("\n");
        }
    }

    free(map); // 동적 메모리 해제
    return 0;
}
