#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,a=1;

    scanf("%d %d",&n, &m);

    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++,a++){
            arr[i][j] = a;
            printf("%d ",a);
        }
    printf("\n");
    }

    return 0;
}