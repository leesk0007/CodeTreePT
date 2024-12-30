#include <stdio.h>

#define MAX_NUM 1000

int main() {
    // 변수 선언:
    int n;
    int price[MAX_NUM];

    // 입력:
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &price[i]);

    // 배열을 앞에서부터 순회하며 사는 시점의 후보를 선택합니다
    int max_profit = 0;
    for(int i = 0; i < n; i++) {
        // 사는 시점의 다음 해부터 순회하며 파는 시점의 후보를 선택합니다
        for(int j = i + 1; j < n; j++) {
			int profit = price[j] - price[i];
            
            if(profit > max_profit)
                max_profit = profit;
        }
    }

    printf("%d", max_profit);
	
    return 0;
}