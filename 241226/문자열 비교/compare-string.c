#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 100

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // 문자열 집합 S와 M
    char S[n][MAX_STR_LEN];
    char M[m][MAX_STR_LEN];

    // 문자열 S 입력
    for (int i = 0; i < n; i++) {
        scanf("%s", S[i]);
    }

    // 문자열 M 입력
    for (int i = 0; i < m; i++) {
        scanf("%s", M[i]);
    }

    // 문자열 비교를 위한 카운트
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (strcmp(M[i], S[j]) == 0) { // S에 M의 문자열이 있으면
                count++;
                break; // S에 한 번만 존재하면 충분
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
