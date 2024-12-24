#include <stdio.h>

int main() {
    int a, b;
    int count[10] = {0}; // 나머지의 등장 횟수 저장 배열
    int sum = 0;

    // 두 정수 입력
    scanf("%d", &a);
    scanf("%d", &b);

    // 나눗셈 반복
    while (a > 0) {
        int remainder = a % b; // 나머지 계산
        count[remainder]++;   // 나머지 등장 횟수 증가
        a /= b;               // 몫을 a에 저장
    }

    // 각 나머지 등장 횟수의 제곱 합 계산
    for (int i = 0; i < 10; i++) {
        sum += count[i] * count[i];
    }

    // 결과 출력
    printf("%d\n", sum);

    return 0;
}
