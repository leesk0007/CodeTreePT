#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int A[n1], B[n2];

    // A 배열 입력
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    // B 배열 입력
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    // 연속 부분 수열 확인
    int i = 0, j = 0; // i: A 배열, j: B 배열

    while (i < n1 && j < n2) {
        if (A[i] == B[j]) {
            j++; // B의 다음 원소 확인
        }
        i++; // A의 다음 원소로 이동
    }

    // B의 모든 원소를 확인했다면 연속 부분 수열
    if (j == n2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
