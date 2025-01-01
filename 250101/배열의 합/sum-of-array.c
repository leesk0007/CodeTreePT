#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[4][4];
    int i,j,sum;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<4; i++){
        sum=0;
        for(j=0; j<4; j++){
            sum+=arr[i][j];
        }
        printf("%d\n",sum);
    }

    return 0;
}