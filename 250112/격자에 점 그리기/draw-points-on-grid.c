#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n][n];
    // 초기화

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = 0;
        }
    }

    int loc[m][2];

    // 위치 저장
    for(int i=0; i<m; i++){
        scanf("%d %d",&loc[i][0],&loc[i][1]);
    }

    // 해당하는 위치에 순서대로 입력
    for(int i=0; i<m; i++){
        arr[(loc[i][0]-1)][(loc[i][1]-1)] = i+1;
    }

    // 출력
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}